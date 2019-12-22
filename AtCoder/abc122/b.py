import sys, os
import collections

def solve(input_stream):
  line = input_stream.readline().strip()
  start = 0
  end = 1
  ans = 0
  while end < len(line) + 1:
    target = line[end - 1]
    if target in ["A", "C", "G", "T"]:
      ans = max(ans, end - start)
      end += 1
    else:
      start = end
      end += 1
  return [str(ans)]

if __name__ == "__main__":
    outputs = solve(sys.stdin)
    for line in outputs:
      print(line)