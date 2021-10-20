#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,a,b,c;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>a>>b>>c;
		if(a<=b)
		{
			if(a<=c)
			{
				cout<<b+c<<"\n";
			}
			else
			{
				cout<<a+b<<"\n";
			}
		}
		else
		{
			if(b<=c)
			{
				cout<<a+c<<"\n";
			}
			else
			{
				cout<<a+b<<"\n";
			}
		}
	}
	return 0;
}
