import sys, os
import collections
from abc147 import c

def test_abc147_c():
  with open("abc147/tests/c/c_2.input") as fp:
    output = c.solve(fp)
    with open("abc147/tests/c/c_2.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output