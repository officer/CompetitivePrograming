import sys, os
import collections

def solve(input_stream):
  a,b,c = map(int,input_stream.readline().strip().split())
  ans = ""
  if a+b+c < 22:
    ans = "win"
  else:
    ans = "bust"
  return [ans]

if __name__ == "__main__":
    outputs = solve(sys.stdin)
    for line in outputs:
      print(line)