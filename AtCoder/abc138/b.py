import sys, os
import collections

MOD = 10 ** 9 + 7

def solve(input_stream):
  N = read_int(input_stream)
  numbers = read_ints(input_stream)
  ans = 1.0
  mother = 0
  for value in numbers:
    mother += 1.0/value
  
  return [str(ans/mother)]


def read_ints(input_stream):
  return [i for i in map(int, input_stream.readline().strip().split())]

def read_int(input_stream):
  return int(input_stream.readline().strip())


if __name__ == "__main__":
    outputs = solve(sys.stdin)
    for line in outputs:
      print(line)