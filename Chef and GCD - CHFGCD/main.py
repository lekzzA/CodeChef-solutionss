def gcd(a,b):
    if a==0:
        return b
    return gcd(b%a, a)

for _ in range(int(input())):
    a,b = map(int, input().split())
    x = min(a,b)
    y = max(a,b)
    if gcd(x,y)>1:
        print(0)
    elif gcd(x+1, y)>1 or gcd(x, y+1)>1:
        print(1)
    
    else:
        print(2)
