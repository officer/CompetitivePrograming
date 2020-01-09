import sys, os
import collections


def count(n):
  count = 0
  while True:
    if n % 10 != 0:
      break
    n /= 10
    count += 1
  return count

def check(n):
  divisor = 2
  while n % divisor == 0:
    divisor *= 2
  return divisor


def solve(input_stream):
  temp = 50
  for i in range(10):
    print("Count: %d  Divisor -> %d" % (count(temp*(temp-2)), check(temp-2)))
    temp *= 5

def read_ints(input_stream):
  return  map(int, input_stream.readline().strip().split())

def read_int(input_stream):
  return input_stream.read()

if __name__ == "__main__":
    outputs = solve(sys.stdin)
    for line in outputs:
      print(line)