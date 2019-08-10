import heapq

def test_test():
    h = []
    for i in range(2, 10):
        heapq.heappush(h, -i)
    h.extend([i for i in range(20)])
    assert -1 * heapq.heappop( h) == 9
    assert -1 * heapq.heappop( h) == 8
