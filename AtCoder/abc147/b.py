import sys, os
import collections
import math

def solve(input_stream):
  line = input_stream.readline().strip()
  length = len(line)
  border_before = math.floor(length/2)
  border_after = math.ceil(length/2)
  
  before = line[0:border_before]
  after = line[border_after:length][::-1]

  ans = 0
  for a, b in zip(before, after):
    if a != b:
      ans += 1
  
  return [str(ans)]

  
  

if __name__ == "__main__":
    outputs = solve(sys.stdin)
    for line in outputs:
      print(line)