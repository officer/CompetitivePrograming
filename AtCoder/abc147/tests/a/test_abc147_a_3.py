import sys, os
import collections
from abc147 import a

def test_abc147_a():
  with open("abc147/tests/a/a_3.input") as fp:
    output = a.solve(fp)
    with open("abc147/tests/a/a_3.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output