import sys, os
import collections
from abc138 import e



def test_abc138_e_0():
  with open("abc138/tests/e/e_0.input") as fp:
    output = e.solve(fp)
    with open("abc138/tests/e/e_0.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output

def test_abc138_e_1():
  with open("abc138/tests/e/e_1.input") as fp:
    output = e.solve(fp)
    with open("abc138/tests/e/e_1.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output

def test_abc138_e_2():
  with open("abc138/tests/e/e_2.input") as fp:
    output = e.solve(fp)
    with open("abc138/tests/e/e_2.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output
