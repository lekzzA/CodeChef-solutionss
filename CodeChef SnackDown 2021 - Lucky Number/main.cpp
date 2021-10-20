#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t, a, b, c;
	bool f = false;
	cin>>t;
	for(int i = 0; i < t; i++)
	{
		f = false;
		cin>>a>>b>>c;
		if (a == 7 || b == 7 || c == 7)
			f = true;
		if(f)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
