import sys, os
import collections
from abc122 import b

def test_abc122_b():
  with open("abc122/tests/b/b_0.input") as fp:
    output = b.solve(fp)
    with open("abc122/tests/b/b_0.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output