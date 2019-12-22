import sys, os
import collections
from abc147 import f

def test_abc147_f():
  with open("abc147/tests/f/f_2.input") as fp:
    output = f.solve(fp)
    with open("abc147/tests/f/f_2.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output