import sys, os
import collections
from abc147 import f

def test_abc147_f():
  with open("abc147/tests/f/f_4.input") as fp:
    output = f.solve(fp)
    with open("abc147/tests/f/f_4.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output