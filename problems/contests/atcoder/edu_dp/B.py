import sys


def main():
    input = sys.stdin.readline
    n, k = (int(x) for x in input().split())
    v = [int(x) for x in input().split()]

    dp = [0] * n
    dp[1] = abs(v[0] - v[1])

    for i in range(1, n):
        dp[i] = min(
            dp[j] + abs(v[j] - v[i]) for j in range(max(i - k, 0), i)
        )
 
    print(dp[-1])    


if __name__ == "__main__":
    main()
