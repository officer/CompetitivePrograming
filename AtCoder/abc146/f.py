import sys, os
import collections

MOD = 10 ** 9 + 7

class State:
  def __init__(self, current, turns):
    super().__init__()
    self.current = current
    self.turns = turns

def solve(input_stream):
  N, M = read_ints(input_stream)
  S = input_stream.readline().strip()
  dfs = []
  dfs.append(State(0, []))
  ans = None
  completed = False
  while len(dfs) > 0 and not completed:
    state = dfs.pop(len(dfs)-1)
    for index in range(M, 1, -1):
      target = state.current + index
      if target > N:
        continue
      if target == N:
        state.turns.append(str(index))
        ans = state.turns
        completed = True
        break
      if S[target] != '1':
        new_state = State(target, state.turns)
        new_state.turns.append(str(index))
        dfs.append(new_state)
  return [" ".join(ans)] if ans != None else ["-1"]





def read_ints(input_stream):
  return [i for i in map(int, input_stream.readline().strip().split())]

def read_int(input_stream):
  return int(input_stream.readline().strip())


if __name__ == "__main__":
    outputs = solve(sys.stdin)
    for line in outputs:
      print(line)