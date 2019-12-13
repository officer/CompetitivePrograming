import sys, os
import collections
from abc138 import c



def test_abc138_c_0():
  with open("abc138/tests/c/c_0.input") as fp:
    output = c.solve(fp)
    with open("abc138/tests/c/c_0.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output

def test_abc138_c_1():
  with open("abc138/tests/c/c_1.input") as fp:
    output = c.solve(fp)
    with open("abc138/tests/c/c_1.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output

def test_abc138_c_2():
  with open("abc138/tests/c/c_2.input") as fp:
    output = c.solve(fp)
    with open("abc138/tests/c/c_2.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output
