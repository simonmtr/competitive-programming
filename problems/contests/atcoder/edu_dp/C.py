import sys


def main():
    input = sys.stdin.readline
    n = int(input())
    a = [[int(x) for x in input().split()] for _ in range(n)]

    dp = [0, 0, 0]
    for i in range(n):
        cur_dp = [0, 0, 0]
        for j in range(3):
            cur_dp[j] = a[i][j] + max(dp[k] for k in range(3) if j != k)
        dp = cur_dp
    print(max(dp))

if __name__ == "__main__":
    main()
