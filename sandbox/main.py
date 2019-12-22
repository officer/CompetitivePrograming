import sys, os
import collections


def solve(input_stream):
    print( 8 >> 2)
    print( 1 << 2)



def read_ints(input_stream):
  return  map(int, input_stream.readline().strip().split())

def read_int(input_stream):
  return input_stream.read()

if __name__ == "__main__":
    outputs = solve(sys.stdin)
    for line in outputs:
      print(line)