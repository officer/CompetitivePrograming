
import pprint
import sys

MOD = 1000000007

def main():
    num = sys.stdin.readline().strip()
    dp = [[0 for j in range(13)] for i in range(len(num) + 1)]
    dp[0][0] = 1
    for index in range(len(num)):
        print(num[index])
        if num[index] == '?':
            c = -1
        else:
            c = int(num[index])
        for i in range(10):
            if c != -1 and c != i:
                continue
            for j in range(13):
                dp[index + 1][(j * 10 + i) % 13] += dp[index][j]
        for i in range(13):
            dp[index + 1][i] %=  MOD
        print(dp[index+1])
    


if __name__ == "__main__":
    main()