#We have to sort the 0's in decreasing number of 0's and 1's in increasing order to make maximum possible subsequeneces.

for _ in range(int(input())):
    n = int(input())
    l = list(map(int,input().split()))
    eve = []
    odd = []
    res = 0
    for i in range(len(l)):
        if i%2 == 0:
            eve.append(l[i])
        else:
            odd.append(l[i])
    eve.sort(reverse = True)
    odd.sort()
    k = sum(odd)
    for (a,b) in zip(eve,odd):
        print(a, b, end = " ")
        res += (a*k)
        k -= b
    if len(eve) > len(odd):
        print(eve[-1],end = "")
    print()
    print(res)
