
import sys

def main():
    sys.stdin.readline()
    numbers = [int(i) for i in sys.stdin.readline().strip().split()]
    current = 1
    for i in numbers:
        if current < i:
            current = i -1
        elif current > i:
            print("No")
            return
    print("Yes")
        
if __name__ == "__main__":
    main()