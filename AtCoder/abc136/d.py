
import sys
import math

def main():
    cells = sys.stdin.readline().strip()
    results = [0 for i in range(len(cells))]
    current = 0
    for index in range(len(cells)):
        if cells[index] == 'R':
            current += 1
        elif cells[index] == 'L':
            results[index - 1] += int(math.ceil(current / 2.0))
            results[index] += int(current / 2)
            current = 0
    for index in reversed(range(len(cells))):
        if cells[index] == 'L':
            current += 1
        elif cells[index] == 'R':
            results[index + 1] += int(math.ceil(current / 2.0))
            results[index] += int(current / 2)
            current = 0
    print(" ".join( [str(i) for i in results]))

if __name__ == "__main__":
    main()