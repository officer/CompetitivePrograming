import sys, os
import collections
from abc146 import c

def test_abc146_c():
  with open("abc146/tests/c/c_7.input") as fp:
    output = c.solve(fp)
    with open("abc146/tests/c/c_7.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output