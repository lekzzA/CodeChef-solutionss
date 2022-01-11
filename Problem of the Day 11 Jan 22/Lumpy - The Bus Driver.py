for i in range(int(input())):
    inp = list(map(int,input().split()))  // Taking input the three values viz. N, P, Q in a single list;
    n = inp[0]
    p = inp[1]
    q = inp[2]
    a = []
    a = list(map(int, input().split())) // Taking the array A input;
    count = 0
    tm = 2*q + p  // total change money that Lumpy has in hand
    a.sort()      // Sorting the array of extra money. Logic behind this is to give back the money from the smallest amount to largest so as to maximise the number of customers getting money back;
    for k in a:
        r = k//2
        if r > q: // Checking if coins of 2 are more than that required for paying... Idea is to spend the maximum 2 ruppee coin first.
            r = q
        if k - r*2 <= p:  // Checking if 1 ruppee coin are sufficient for paying
            count += 1    // incrementing the total number of customers getting money back.
            q -= r
            p -= (k - r*2)
        else:
            pass
    print(count)  
