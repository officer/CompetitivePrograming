import sys, os
import collections
from abc146 import a

def test_abc146_a():
  with open("abc146/tests/a/a_1.input") as fp:
    output = a.solve(fp)
    with open("abc146/tests/a/a_1.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output