for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    a = max(l)
    l1 = []
    for i in l:
        l1.append(a^i)
    c = 0
    for i in l1:
        c = c|i
    print(a, c)
