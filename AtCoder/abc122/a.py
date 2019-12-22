import sys, os
import collections

def solve(input_stream):
  table = {
    "A": "T",
    "T": "A",
    "C": "G",
    "G": "C"
  }
  ans = ""
  for i in input_stream.readline().strip():
    ans += table[i]
  return [ans]

if __name__ == "__main__":
    outputs = solve(sys.stdin)
    for line in outputs:
      print(line)