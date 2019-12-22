import sys, os
import collections
import math

MOD = 10 ** 9 + 7
MAX = 10 ** 9

def solve(input_stream):
  A,B,X = read_ints(input_stream)
  start = 0
  end = 10 ** 9

  ans = 0
  while start < end:
    target = math.ceil( (start + end) / 2)
    result = (A*target) + (B*calc_d(target))
    if X > result:
      ans = target
      start = target + 1
    elif X < result:
      end = target - 1
    else:
      ans = target
      break

  return [str(ans)]

def calc_d(target):
  if target == 0:
    return 1
  return math.floor(math.log10(target) + 1)

def read_ints(input_stream):
  return [i for i in map(int, input_stream.readline().strip().split())]

def read_int(input_stream):
  return int(input_stream.readline().strip())


if __name__ == "__main__":
    outputs = solve(sys.stdin)
    for line in outputs:
      print(line)