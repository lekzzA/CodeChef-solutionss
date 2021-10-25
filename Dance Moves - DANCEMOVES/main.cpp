#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, x, y, temp, res;
    cin>>t;
    for(int i = 0; i < t; i++)
    {
        cin>>x>>y;
        temp = y - x;
        if(temp == -1)
        {
            cout<<"1"<<endl;
            continue;
        }
        else if(temp == 1)
        {
            cout<<"2"<<endl;
            continue;
        }
        else if(temp == 0)
        {
            cout<<"0"<<endl;
            continue;
        }
        else if(x > y)
        {
            cout<<x-y<<endl;
        }
        else
        {
            temp = y - x;
            res = temp/2;
            if(temp%2 != 0)
                res += 2;
            cout<<res<<endl;
        }
    }

    return 0;
}
