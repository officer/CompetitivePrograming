import sys, os
import collections
from abc147 import b

def test_abc147_b():
  with open("abc147/tests/b/b_4.input") as fp:
    output = b.solve(fp)
    with open("abc147/tests/b/b_4.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output