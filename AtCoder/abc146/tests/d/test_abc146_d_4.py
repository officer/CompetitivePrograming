import sys, os
import collections
from abc146 import d

def test_abc146_d():
  with open("abc146/tests/d/d_4.input") as fp:
    output = d.solve(fp)
    with open("abc146/tests/d/d_4.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output