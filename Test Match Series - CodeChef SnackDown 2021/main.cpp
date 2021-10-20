#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t, a;
	int in, en, dr;
	bool f = false;
	cin>>t;
	for(int i = 0; i < t; i++)
	{
		in = 0;
		dr = 0;
		en = 0;
		f = false;
		for(int j = 0; j < 5; j++)
		{
			cin>>a;
			 if(a == 1)
				in++;
			else if(a == 2)
				en++;
		}
		if(in == en)
			cout<<"DRAW"<<endl;
		else if(in > en)
			cout<<"INDIA"<<endl;
		else
			cout<<"ENGLAND"<<endl;
		
	}
	return 0;
}
