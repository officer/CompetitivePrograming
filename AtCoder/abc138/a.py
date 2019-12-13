import sys, os
import collections

MOD = 10 ** 9 + 7

def solve(input_stream):
  a = read_int(input_stream)
  s = input_stream.readline().strip()
  if a < 3200:
    return [str("red")]
  else:
    return [s]

def read_ints(input_stream):
  return [i for i in map(int, input_stream.readline().strip().split())]

def read_int(input_stream):
  return int(input_stream.readline().strip())


if __name__ == "__main__":
    outputs = solve(sys.stdin)
    for line in outputs:
      print(line)