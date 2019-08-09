# Binary Indexed Tree
# Reference http://hos.ac/slides/20140319_bit.pdf
class BIT():
    def __init__(self, size):
        self.bits = [0 for i in range(size+1)]
        self.size = size


    def update(self, index, value):
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
