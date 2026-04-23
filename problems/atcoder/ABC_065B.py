import sys
# examples:
# n = int(input())
# a = [int(x) for x in input().split()]
# s = input().strip()


def main():
    input = sys.stdin.readline
    n = int(input())
    a = []
    for _ in range(n):
        a.append(int(input()))
    seen = set()
    jumps = 0
    nxt = 1
    while nxt not in seen:
        seen.add(nxt)
        temp = a[nxt - 1]
        if temp == 2:
            jumps += 1
            print(jumps)
            return
        jumps+=1
        nxt = temp
    print(-1)
   


if __name__ == "__main__":
    main()
