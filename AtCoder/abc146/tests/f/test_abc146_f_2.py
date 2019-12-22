import sys, os
import collections
from abc146 import f

def test_abc146_f():
  with open("abc146/tests/f/f_2.input") as fp:
    output = f.solve(fp)
    with open("abc146/tests/f/f_2.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output