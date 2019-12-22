import sys, os
import collections
from abc147 import d

def test_abc147_d():
  with open("abc147/tests/d/d_4.input") as fp:
    output = d.solve(fp)
    with open("abc147/tests/d/d_4.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output