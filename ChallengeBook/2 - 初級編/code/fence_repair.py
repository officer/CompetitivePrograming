import heapq

def main(N, L):
    ans = 0
    heapq.heapify(L)
    while len(L) != 1:
        temp = heapq.heappop(L) + heapq.heappop(L)
        heapq.heappush(L, temp)
        ans += temp
    
    print(ans)



if __name__ == "__main__":
    main(3, [8, 5, 8])