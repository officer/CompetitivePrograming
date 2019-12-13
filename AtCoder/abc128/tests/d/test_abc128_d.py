import sys, os
import collections
from abc128 import d



def test_abc128_d_0():
  with open("abc128/tests/d/d_0.input") as fp:
    output = d.solve(fp)
    with open("abc128/tests/d/d_0.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output

def test_abc128_d_1():
  with open("abc128/tests/d/d_1.input") as fp:
    output = d.solve(fp)
    with open("abc128/tests/d/d_1.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output

def test_abc128_d_2():
  with open("abc128/tests/d/d_2.input") as fp:
    output = d.solve(fp)
    with open("abc128/tests/d/d_2.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output
