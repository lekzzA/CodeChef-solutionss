for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    d= dict()
    for i in l:
        if i not in d:
            d[i] = 1
        else:
            d[i]+=1
    c = 0
    for i in d.values():
        c += (i*(i-1))
    n = n*(n-1)    
    print(n-c)
