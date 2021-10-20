for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    d = dict()
    #s = set(l)
    for i in l:
        if i not in d:
            d[i] = 1
        else:
            if d[i]<(i-1):
                d[i]+=1
    c = 0
    val = d.values()
    c = sum(val)
    print(c)
