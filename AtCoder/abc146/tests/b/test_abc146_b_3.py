import sys, os
import collections
from abc146 import b

def test_abc146_b():
  with open("abc146/tests/b/b_3.input") as fp:
    output = b.solve(fp)
    with open("abc146/tests/b/b_3.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output