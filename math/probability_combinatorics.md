# Probability


## Dices

Expected Value EV = (n+1)/2 where n is the number of sides on the die

### Stategy for rolling again
1. Calculate the expected value of keeping the first roll
1. Calculate the adjusted balue of a single roll
2. Calculate the probability of rolling again
3. Calculate the total EV: (Avg value of keep) * (probability of keeping) + (avg value of rerolling) * (probability of rerolling)

Example: 6 sided die, roll it and you gain the face value. You can choose to reject the first roll and roll a second time. What is your strategy?
-> 1. Value of a single roll = (1+2+3+4+5+6)/6 = 3.5
-> 2. Adjusted value of a single roll = (4+5+6)/3 = 5 -> Because we only keep these values
-> 3. Value of rerolling = (1+6)/2 = 3.5 -> Because if we reach here we take any number
-> 4. Total EV = (5 * 0.5) + (3.5 * 0.5) = 4.25
Answer: Keep if you roll 4 or higher, otherwise reroll


### At least one

Expected Value EV = 1 - P(none)

Example: 3 dice, what is the probability of rolling at least one 3?
P(none) = (5/6)^3 = 125/216
EV = 1 - P(none) = 1 - 125/216 = 91/216

## Coins


Expected Value EV = 0.5 for a fair coin

Combinations:
C = n! / (k! * (n-k)!) where n is the total number of flips and k is the number of heads
--> time saver: C = C(n, k) = C(n, n-k) | Example: C(10, 12) = C(10, 2)
P = C(n, k) * (0.5)^n where n is the total number of flips and k is the number of heads

EV = C(n, k) * (0.5)^n


### Exactly k heads in n flips

1. Calculate the number of ways to get k heads in n flips using combinations
2. Calculate the probability of getting k heads in n flips using the formula above

Example: If you flip a coin 6 times, what is the probability you get exactly 3 heads?
1. C(6, 3) = 6! / (3! * (6-3)!) = 20
2. P = C(6, 3) * (0.5)^6 = 20 * (0.5)^6 = 20/64 = 5/16
Answer: 5/16

