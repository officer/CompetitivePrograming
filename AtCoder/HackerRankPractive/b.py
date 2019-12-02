
import sys

def main():
    numbers = [int(i) for i in sys.stdin.readline().strip().split(",")]
    answer = []

    for index, number in enumerate(numbers):
        if index % 2 == 1 and number != numbers[index-1]:
            continue
        answer.append(str(number))


    print(",".join(answer))



if __name__ == "__main__":
    main()