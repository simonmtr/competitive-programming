import random
import sys
import time
import operator as op_module

def _get_config():
    print("Input max number of digits for num1 (1-3):")
    n1 = int(input())
    print("Input max number of digits for num2 (1-3):")
    n2 = int(input())
    print("Allow floating point numbers? (y/n/s):")
    fp = input().lower()
    print("Timelimit per question (seconds, -1 for none):")
    t_limit = int(input())
    print("Total time limit in minutes:")
    total_t = int(input())
    if not (0 < n1 <= 3) or not (0 < n2 <= 3) or fp not in ["y", "n", "s"] or t_limit < -1 or total_t < -1:
        raise ValueError("Invalid input configuration.")
    return n1, n2, fp, t_limit, total_t

def _generate_number(max_digits, fp_mode):
    digits = random.randint(1, max_digits)
    
    if digits == 1:
        num = random.randint(1, 9)
    elif digits == 2:
        num = random.randint(10, 99)
    else:
        num = random.randint(100, 999)

    if fp_mode == "y" or (fp_mode == "s" and random.choice([True, False])):
        num = round(num + random.random(), 1)
    return num

def calculation_main(operator_str: str="x"):
    ops = {
        "x": op_module.mul,
        "/": op_module.truediv,
        "+": op_module.add,
        "-": op_module.sub,
        "%": lambda a, b: (a / 100.0) * b
    }
    calc_func = ops.get(operator_str, op_module.mul)

    n1_digits, n2_digits, fp_input, q_time_limit, session_limit = _get_config()

    total_time_spent = 0
    results = {}
    question_count = 1
    while (session_limit == -1 or total_time_spent < session_limit * 60):
        num1 = _generate_number(n1_digits, fp_input)
        num2 = _generate_number(n2_digits, fp_input)

        if operator_str == "%":
            num1 = random.randint(1, 100)
            display_str = f"{num1}% of {num2}"
        else:
            display_str = f"{num1} {operator_str} {num2}"

        res = round(calc_func(num1, num2), 1)
        
        print(display_str)
        sys.stdout.flush()
        start_time = time.time()
        
        user_input = input()
        end_time = time.time()
        time_needed = end_time - start_time

        if user_input == "-1":
            break
        
        if q_time_limit != -1 and time_needed > q_time_limit:
            print(f"Time is up, the correct answer was {res} (took {time_needed:.2f}s)")
            total_time_spent += time_needed
            continue

        try:
            user_res = float(user_input)
        except ValueError:
            print("Invalid input")
            total_time_spent += time_needed
            continue

        if user_res == res:
            results[question_count] = (True, num1, num2, res, user_res, time_needed)
        else:
            results[question_count] = (False, num1, num2, res, user_res, time_needed)
        total_time_spent += time_needed
        question_count += 1
    return results
