import sys, os
import collections
from abc147 import e

def test_abc147_e():
  with open("abc147/tests/e/e_3.input") as fp:
    output = e.solve(fp)
    with open("abc147/tests/e/e_3.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output