// Hint : LCM of two consecutive number -> product of two numbers
// Find minimum LCM of any number with any of number ahead it.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int t, x, k, minlcm, maxlcm;
    cin>>t;
    for(int i = 0; i < t; i++)
    {
        cin>>x>>k;
        minlcm = x*2;
        maxlcm = x*k*(x*k - 1);
        cout<<minlcm<<" "<<maxlcm<<endl;
    }
    return 0;
}
