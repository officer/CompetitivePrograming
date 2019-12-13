import sys, os
import collections

MOD = 10 ** 9 + 7

class Node:
  def __init__(self, to,  score = 0):
    super().__init__()
    self.to = to
    self.score = score

class DFS:
  def __init__(self, vertex = 0, parent = -1):
    super().__init__()
    self.vertex = vertex
    self.parent = parent
    

def solve(input_stream):
  N,Q = read_ints(input_stream)
  graph = []
  for index in range(N):
    graph.append(Node([]))
  for index in range(N-1):
    a,b = read_ints(input_stream)
    a-=1
    b-=1
    graph[a].to.append(b)
    graph[b].to.append(a)
  for index in range(Q):
    p,x = read_ints(input_stream)
    p-=1
    graph[p].score += x
  
  dfs = [DFS()]
  while len(dfs) > 0:
    state = dfs.pop(0)
    current_node = graph[state.vertex]
    for to in current_node.to:
      if to == state.parent:
        continue
      child_node = graph[to]
      child_node.score += current_node.score
      dfs.append(DFS(to, state.vertex))
  ans = []
  for i in graph:
    ans.append(str(i.score))
  return [" ".join(ans)]

def read_ints(input_stream):
  return [i for i in map(int, input_stream.readline().strip().split())]

def read_int(input_stream):
  return int(input_stream.readline().strip())


if __name__ == "__main__":
    outputs = solve(sys.stdin)
    for line in outputs:
      print(line)