import sys, os
import collections

def solve(input_stream):
  n, q = [int(char) for char in input_stream.readline().strip().split()]
  target = input_stream.readline().strip()
  ans = []

  dp = [0 for i in range(len(target) + 1)]
  is_a = False
  for index, char in enumerate(target):
    dp[index + 1] = dp[index]
    if is_a:
      if char == "C":
        dp[index + 1] += 1
      is_a = False
    if char == "A":
      is_a = True
  for index in range(q):
    l, r = [int(char) for char in input_stream.readline().strip().split()]
    ans.append(str( dp[r] - dp[l] ))
  return ans  

if __name__ == "__main__":
    outputs = solve(sys.stdin)
    for line in outputs:
      print(line)