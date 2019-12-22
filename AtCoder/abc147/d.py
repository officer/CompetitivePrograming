import sys, os
import collections

MOD = 10 ** 9 + 7

def solve(input_stream):
  N = read_int(input_stream)
  numbers = read_ints(input_stream)
  ans = 0
  for target_bit in range(60):
    count = [0] * 2
    for index in range( len(numbers) ):
      ans += ( count[ (numbers[index] >> target_bit & 1) ^ 1 ] ) << target_bit
      count[ numbers[index] >> target_bit & 1] += 1
  return [str(ans % MOD)]


def read_ints(input_stream):
  return [i for i in map(int, input_stream.readline().strip().split())]

def read_int(input_stream):
  return int(input_stream.readline().strip())


if __name__ == "__main__":
    outputs = solve(sys.stdin)
    for line in outputs:
      print(line)