import sys, os
import collections
from abc122 import c

def test_abc122_c():
  with open("abc122/tests/c/c_0.input") as fp:
    output = c.solve(fp)
    with open("abc122/tests/c/c_0.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output