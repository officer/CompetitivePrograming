import sys, os
import collections
from abc122 import d

def test_abc122_d():
  with open("abc122/tests/d/d_4.input") as fp:
    output = d.solve(fp)
    with open("abc122/tests/d/d_4.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output