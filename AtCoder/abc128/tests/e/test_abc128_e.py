import sys, os
import collections
from abc128 import e



def test_abc128_e_0():
  with open("abc128/tests/e/e_0.input") as fp:
    output = e.solve(fp)
    with open("abc128/tests/e/e_0.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output
