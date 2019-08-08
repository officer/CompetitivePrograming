
import sys

def main():
    K = int(sys.stdin.readline().strip())
    x,y = (int(i) for i in sys.stdin.readline().strip().split())
    distance = abs(x) + abs(y)

    steps = 0
    if K %2 == 0:
        # if K is even and distance is odd.
        # Can't reaches.
        if distance % 2 == 1:
            print(-1)
            return

        # if K is even and distance is even.
        # K is bigger than distance, need 1 more step to modify.
        if K > distance:
            print(2)
            return

        steps = distance / K
        if distance % K > 0:
            steps += 1
        
        print(steps)
        
    else:
        # if K is odd
        if distance %2 == 1:
            # if distance is also odd
            # if K is bigger than distance, need to modify
            if K > distance:
                print(3)
                return
            
            # otherwise, same as odd
            steps = distance / K
            if distance % K > 0:
                steps += 1
            
            print(steps)
        else:
            # if distance is even
            if K > distance:
                print(2)
                return
            
            steps = distance / K
            if distance % K > 0:
                steps += 1
            if steps % 2 == 0:
                steps += 1
            
            print(steps) 
    
    

if __name__ == "__main__":
    main()