import sys, os
import collections
from abc138 import a



def test_abc138_a_0():
  with open("abc138/tests/a/a_0.input") as fp:
    output = a.solve(fp)
    with open("abc138/tests/a/a_0.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output

def test_abc138_a_1():
  with open("abc138/tests/a/a_1.input") as fp:
    output = a.solve(fp)
    with open("abc138/tests/a/a_1.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output

def test_abc138_a_2():
  with open("abc138/tests/a/a_2.input") as fp:
    output = a.solve(fp)
    with open("abc138/tests/a/a_2.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output
