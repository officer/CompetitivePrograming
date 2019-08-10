
import sys
from operator import attrgetter
import heapq

def main():
    N,M = [int(i) for i in sys.stdin.readline().strip().split()]
    works = [[] for i in range(10**5+1)]
    ans = 0
    for i in range(N):
        A,B = [int(i) for i in sys.stdin.readline().strip().split()]
        works[A].append(B)
    
    avaiable_works = []
    for i in range(1, M+1):
        for item in works[i]:
            heapq.heappush(avaiable_works, item)
        if len(avaiable_works) > 0:
            revenue = abs(heapq.heappop(avaiable_works))
        else:
            continue
        ans += revenue
    
    print("%d" % ans)

def solve(N, M, works):
    ans = 0

    return 0

if __name__ == "__main__":
    main()