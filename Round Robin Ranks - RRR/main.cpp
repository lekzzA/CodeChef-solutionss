#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    long long int n, k, tp, res;
    cin>>t;
    for(int i = 0; i < t; i++)
    {
        cin>>n>>k;
        tp = n*(n-1);
        if(n-k != 0)
        {
            tp -= (n-k)*(n-k-1);
        }
        res = tp/k;
        if(k%2 == 0)
            res--;
        cout<<res<<endl;
    }

    return 0;
}
