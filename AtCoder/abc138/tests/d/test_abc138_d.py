import sys, os
import collections
from abc138 import d



def test_abc138_d_0():
  with open("abc138/tests/d/d_0.input") as fp:
    output = d.solve(fp)
    with open("abc138/tests/d/d_0.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output

def test_abc138_d_1():
  with open("abc138/tests/d/d_1.input") as fp:
    output = d.solve(fp)
    with open("abc138/tests/d/d_1.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output
