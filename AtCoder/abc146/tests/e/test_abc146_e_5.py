import sys, os
import collections
from abc146 import e

def test_abc146_e():
  with open("abc146/tests/e/e_5.input") as fp:
    output = e.solve(fp)
    with open("abc146/tests/e/e_5.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output