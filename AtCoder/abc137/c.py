
import sys
from collections import Counter

def main():
    N = int(sys.stdin.readline().strip())
    ans = 0
    present = {}
    for i in range(N):
        temp = "".join(sorted(sys.stdin.readline().strip()))
        if temp not in present:
            present[temp] = 1
        else:
            ans += present[temp]
            present[temp] +=1
        
    print("%d" % ans)

def solve():
    pass


if __name__ == "__main__":
    main()