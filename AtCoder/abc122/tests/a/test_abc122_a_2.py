import sys, os
import collections
from abc122 import a

def test_abc122_a():
  with open("abc122/tests/a/a_2.input") as fp:
    output = a.solve(fp)
    with open("abc122/tests/a/a_2.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output