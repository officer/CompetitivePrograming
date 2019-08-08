from e import solve

def test_e1():
    N = 2
    K = 3
    A = [8, 20]
    assert solve(N, K, A) == 7

def test_e2():
    N = 2
    K = 10
    A = [3, 5]
    assert solve(N, K, A) == 8

def test_e3():
    N = 4
    K = 5
    A = [10, 1, 2, 22]
    assert solve(N, K, A) == 7

def test_e4():
    N = 8
    K = 7
    A = [1, 7, 5, 6, 8, 2, 6, 5]
    assert solve(N, K, A) == 5
