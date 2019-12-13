import sys, os
import collections
from abc138 import b



def test_abc138_b_0():
  with open("abc138/tests/b/b_0.input") as fp:
    output = b.solve(fp)
    with open("abc138/tests/b/b_0.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output

def test_abc138_b_1():
  with open("abc138/tests/b/b_1.input") as fp:
    output = b.solve(fp)
    with open("abc138/tests/b/b_1.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output

def test_abc138_b_2():
  with open("abc138/tests/b/b_2.input") as fp:
    output = b.solve(fp)
    with open("abc138/tests/b/b_2.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output
