import sys, os
import collections
from abc138 import f



def test_abc138_f_0():
  with open("abc138/tests/f/f_0.input") as fp:
    output = f.solve(fp)
    with open("abc138/tests/f/f_0.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output

def test_abc138_f_1():
  with open("abc138/tests/f/f_1.input") as fp:
    output = f.solve(fp)
    with open("abc138/tests/f/f_1.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output

def test_abc138_f_2():
  with open("abc138/tests/f/f_2.input") as fp:
    output = f.solve(fp)
    with open("abc138/tests/f/f_2.output") as fp2:
      lines = [ line.strip() for line in fp2.readlines() ]
      assert lines == output
