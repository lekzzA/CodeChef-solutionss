for _ in range(int(input())):
    n = int(input())
    if n < 3:
        print("1")  #Only possible way of making 2 size array odd is ---> |  1  |  0  |
    else:
        print(1 + (n-1)*(n-2))  #After this we can only add even numbers to array, otherwise sum will become even ----->  |  1  |  0  |  2  |  4  |  6  |  8  |  10  |  ....
