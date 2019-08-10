
import sys

def main():
    K,X = [int(i) for i in sys.stdin.readline().strip().split()]
    MIN = -1000000
    MAX = 1000000
    start = max(X - (K -1), MIN)
    end = min(MAX, X + (K - 1))
    print(" ".join([str(i) for i in range(start, end+1)]))
        
def solve():
    pass


if __name__ == "__main__":
    main()