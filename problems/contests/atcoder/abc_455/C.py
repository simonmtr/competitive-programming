import sys
# examples:
# n = int(input())
# a = [int(x) for x in input().split()]
# s = input().strip()
from collections import defaultdict

def main():
    input = sys.stdin.readline
    n,k = [int(x) for x in input().split()]
    v = [int(x) for x in input().split()]
    # print(f"{n} - {k}")
    # print(f"----{v}")
    m = defaultdict(int)

    for vs in v:
        m[vs]+=1

    kv = []
    startsum = 0
    for ke, val in m.items():
        kv.append(ke*val)
        startsum+=ke*val
    kv_sorted = sorted(kv, reverse=True)
    # print(f"startsum {startsum}")
    # print(f"kvsort - {kv_sorted}")
    for i in range(k):
        if i >=len(kv_sorted):
            return startsum
        startsum -= kv_sorted[i]
    return startsum




if __name__ == "__main__":
    print(main())
