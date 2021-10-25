#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int a,b,c;
	for(int i=0;i<t;i++)
	{
		cin>>a>>b>>c;
		if(a+b+c != 0 && a+b+c != 3)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
	return 0;
}
