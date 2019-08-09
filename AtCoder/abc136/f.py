
import sys
import math
from operator import itemgetter, attrgetter

INF = 1 << 20
MOD = 998244353
# 座標
class Pair:
    def __init__(self, x, y):
        self.x = x
        self.y = y

def main():
    N = int(sys.stdin.readline().strip())
    numbers = []
    for i in range(N):
        x, y = [int(i) for i in sys.stdin.readline().strip().split()]
        numbers.append(Pair(x, y))

    print("%d" % solve(N, numbers))

    
def solve(N, numbers):
    ans = 0

    # sort based Y
    numbers.sort(key=attrgetter("y"))
    for index in range(N):
        numbers[index].y = index

    # compressed numbers
    # sort based X
    numbers.sort(key=attrgetter("x"))
    for index in range(N):
        numbers[index].x = index
             
    # 各象限に存在する点の個数
    a = [0 for i in range(N)]
    b = [0 for i in range(N)]
    c = [0 for i in range(N)]
    d = [0 for i in range(N)]

    # 一番左の点から数えていく
    for rep in range(2):
        # treeを構築。これは、あるy座標以下の点の数がどれだけあるかを数えるもの
        bit = BIT(N)
        # 都合上、iは「それまでに追加した、今計算の対象となっている座標よりも左にある点の数」になる。
        for i in range(N):
            # 左から考えるので、その点より下にある点の数を代入
            a[i] = bit.sum(numbers[i].y)

            # これまでに追加した点の数マイナス、自分より下にある点の数(a)を引く
            b[i] = i - a[i]

            # 点を足す
            bit.update(numbers[i].y)
        numbers.reverse()
        a,b,c,d = c,d,a,b
        a.reverse()
        b.reverse()
        c.reverse()
        d.reverse()

    for i in range(N):
        ans += f([a[i], b[i], c[i], d[i]])
    ans %= MOD
    return ans



def f(nums):
    res = 0
    
    o = [2**i-1 for i in nums]
    ox = [i+1 for i in o]
    res += (ox[0] * o[1] * o[2] * ox[3])
    res += (o[0] * ox[1] * ox[2] * o[3])
    res += (ox[0] * ox[1] * ox[2] * ox[3])
    res -= (o[0] * o[1] * o[2] * o[3])

    return res

# Binary Indexed Tree
# Reference http://hos.ac/slides/20140319_bit.pdf
class BIT:
    def __init__(self, size):
        self.bits = [0 for i in range(size+1)]
        self.size = size

    def update(self, index, value = 1):
        index += 1
        while index <= self.size:
            self.bits[index] += value
            index += index & (-1 * index)
    
    def sum(self, index):
        index += 1
        ans = 0
        while index > 0:
            ans += self.bits[index]
            index -= index & (-1 * index)
        return ans

if __name__ == "__main__":
    main()