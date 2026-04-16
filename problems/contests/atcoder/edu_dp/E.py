import sys

def main():
    input = sys.stdin.readline

    n, w_i = (int(x) for x in input().split())
    items = [[int(x) for x in input().split()] for _ in range(n)]
    max_val = sum(v for _, v in items)
    dp = [w_i + 1] * (max_val + 1)
    dp[0] = 0
    for w, v in items:
        for j in range(max_val, v - 1, -1):
            dp[j] = min(dp[j], dp[j - v] + w)
    for j in range(max_val, -1, -1):
        if dp[j] <= w_i:
            print(j)
            break

if __name__ == "__main__":
    main()
