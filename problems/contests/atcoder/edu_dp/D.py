import sys


def main():
    input = sys.stdin.readline
    n, w_i = (int(x) for x in input().split())
    a = [[int(x) for x in input().split()] for _ in range(n)]
    dp = [0] * (w_i + 1)
    for w, v in a:
        for i in range(w_i, w - 1, -1):
            dp[i] = max(dp[i], dp[i - w] + v)
    
    print(dp[-1])

if __name__ == "__main__":
    main()
