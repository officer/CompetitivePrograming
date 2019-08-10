
import sys

def main():
    a,b = [int(i) for i in sys.stdin.readline().strip().split()]
    ans = 0
    ans = max([a + b, a - b, a * b])
    print("%d" % ans)


def solve():
    pass


if __name__ == "__main__":
    main()