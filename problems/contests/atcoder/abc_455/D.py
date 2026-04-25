import sys
# examples:
# n = int(input())
# a = [int(x) for x in input().split()]
# s = input().strip()
from collections import defaultdict


def main():
    input = sys.stdin.readline
    n, q = [int(x) for x in input().split()]

    loc_cards = defaultdict(lambda:1)
    cards = defaultdict(list)

    for i in range(1, n+1, 1):
        cards[i] = [i]
        loc_cards[i] = i

    for _ in range(1, q+1, 1):
        c, p = [int(x) for x in input().split()]
        temp_list = []
        list_at_p = cards[loc_cards[c]]
        for j in range(len(list_at_p), 0, -1):
            temp_list.append(list_at_p[j-1])
            if list_at_p[j-1] == c:
                break            
        for i in range(len(temp_list)):
            cards[loc_cards[c]].pop()

        cards[loc_cards[p]] += reversed(temp_list)
        for t in temp_list:
            loc_cards[t] = loc_cards[p]


    for i in range(1, n+1, 1):
        print(f"{len(cards[i])} ")



if __name__ == "__main__":
    main()
