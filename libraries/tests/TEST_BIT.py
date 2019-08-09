from BIT import BIT

def test_border():

    bit = BIT(8)
    for i in range(8):
        bit.update(i)

