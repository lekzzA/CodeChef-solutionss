for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    l.sort()
    f = 0
    s = set(l)
    a = l[0]
    s.remove(a)
    for i in s:
        if i%2==0:
            e = (i/2)-1
            if e<a:
                f = 1
                break
        else:
            o = (i-1)/2
            if o<a:
                f = 1
                break
    if f==1:
        print(n)
    else:
        c = l.count(a)
        print(n-c)
