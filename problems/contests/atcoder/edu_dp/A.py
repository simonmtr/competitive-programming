import sys

def main():
    input = sys.stdin.readline

    n = int(input())
    
    h = [int(x) for x in input().split()]

    dp = [0] * n
    dp[1] = abs(h[0] - h[1])

    for i in range(2, n):
        dp[i] = min(
            dp[i-1] + abs(h[i-1] - h[i]),
            dp[i-2] + abs(h[i-2] - h[i])
        )

    return dp[-1]

if __name__ == "__main__":
    print(main())