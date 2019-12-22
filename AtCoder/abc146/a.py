import sys, os
import collections

MOD = 10 ** 9 + 7

def solve(input_stream):
  table = {
    "SUN": 7,
    "MON": 6,
    "TUE": 5,
    "WED": 4,
    "THU": 3,
    "FRI": 2,
    "SAT": 1
  }

  target = input_stream.readline().strip()
  return [str(table[target])]

def read_ints(input_stream):
  return [i for i in map(int, input_stream.readline().strip().split())]

def read_int(input_stream):
  return int(input_stream.readline().strip())


if __name__ == "__main__":
    outputs = solve(sys.stdin)
    for line in outputs:
      print(line)