from src.calculations import calculation_main

def main():
    while (True):
        print("Choose mode:")
        print("1 -> Percentages")
        print("2 -> Multiplication")
        print("3 -> Division")
        print("4 -> Addition")
        print("5 -> Subtraction")
        results = {}
        choice = int(input())
        if choice == -1:
            print("Exiting...")
            break
        if choice == 1:
            results = calculation_main(operator_str="%")
        elif choice == 2:
            results = calculation_main(operator_str="x")
        elif choice == 3:
            results = calculation_main(operator_str="/")
        elif choice == 4:
            results = calculation_main(operator_str="+")
        elif choice == 5:
            results = calculation_main(operator_str="-")
        else:
            print("Invalid choice")
        _print_results(results)

def _print_results(results):
    if not results:
        print("No results to display.")
        return
    print("\n" + "="*60)
    print(f"{'SESSION SUMMARY':^60}")
    print("="*60)
    for i, result in results.items():
        status = "✓" if result[0] else "✗"
        expr = f"{result[1]} {result[2]} {result[3]} = {result[4]}"
        ans = f"Your ans: {result[4]}"
        time_str = f"{result[5]:.2f}s"
        print(f"Q{i:<3} | {expr:<20} | {ans:<15} | {time_str:<8} | {status}")
    
    correct_count = sum(1 for r in results.values() if r[0])
    accuracy = (correct_count / len(results)) * 100
    avg_time = sum(r[5] for r in results.values()) / len(results)
    print("-" * 60)
    print(f"Accuracy: {accuracy:>45.1f}% ({correct_count}/{len(results)})")
    print(f"Avg Time: {avg_time:>45.2f}s")
    print("="*60)


if __name__ == "__main__":
    main()