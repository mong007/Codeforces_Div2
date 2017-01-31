#include <bits/stdc++.h>
using namespace std;
int main()
{
	int e,o;
	cin>>e>>o;
	if(o==0)cout<<"NO"<<endl;
	else if(abs(e-o)<=1)
		cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
