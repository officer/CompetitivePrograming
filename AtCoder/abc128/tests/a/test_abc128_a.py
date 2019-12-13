import sys, os
import collections
from abc128 import a



def test_abc128_a_0():
  with open("abc128/tests/a/a_0.input") as fp:
    output = a.solve(fp)
    with open("abc128/tests/a/a_0.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output

def test_abc128_a_1():
  with open("abc128/tests/a/a_1.input") as fp:
    output = a.solve(fp)
    with open("abc128/tests/a/a_1.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output

def test_abc128_a_2():
  with open("abc128/tests/a/a_2.input") as fp:
    output = a.solve(fp)
    with open("abc128/tests/a/a_2.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output
