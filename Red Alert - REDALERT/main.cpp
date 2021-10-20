#include<bits/stdc++.h>

using namespace std;

int main()
{
	bool flag = true;
	int t,n,d,h,temp,level;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n>>d>>h;
		level = 0;
		flag = true;
		for(int j=0;j<n;j++)
		{
			cin>>temp;
			if(temp > 0)
			{
				level += temp;
				if(level > h)
				{
					flag = false;
				}
			}
			else
			{
				level -= d;
				if(level < 0)
					level = 0;
			}
		}
		if(flag)
			cout<<"NO\n";
		else
			cout<<"YES\n";
		
	}
	return 0;
}
