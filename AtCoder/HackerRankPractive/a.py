
import sys

import math
from collections import Counter

def main():
    matched_words = set()

    lines = sys.stdin.readlines()
    for line in lines:
        words = [i for i in line.strip().split()]
        for word in words:
            if startWithUpperOrNumber(word):
                matched_words.add(word)

    print (len(matched_words))
    
def startWithUpperOrNumber(target):
    return target[0].isupper() or target[0].isdecimal()


if __name__ == "__main__":
    main()