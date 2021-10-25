#include<bits/stdc++.h>

using namespace std;


int main()
{
	int t,d,x,y,z,a,b;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>d>>x>>y>>z;
		a = x*7;
		b = y*(d) + z*(7-d);
		a = (a>b)?a:b;
		cout<<a<<endl;
	}

	return 0;
}
