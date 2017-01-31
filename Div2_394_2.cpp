#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,l,j;
	cin>>n>>l;
	multiset <int> s1,s2;
	multiset <int> :: iterator it,it1;
	int a1[200], a2[201][201];
	int v1[200],v2[200];
	v1[0] = 0;v2[0]=0;
	for(i=1;i<=n;i++) {
		cin>>v1[i];
		if(i!=1)
		s1.insert(v1[i]-v1[i-1]);
	}
	for(i=1;i<=n;i++) {
		cin>>v2[i];
		if(i!=1)
		s2.insert(v2[i]-v2[i-1]);//cout<<(v2[i]-v2[i-1])<<" ";
	}
	s1.insert(l-v1[n]+v1[1]);s2.insert(l-v2[n]+v2[1]);
	int fl = 0;
	/*for(i=1;i<=n;i++) {
		for(j=1;j<=n;j++){
			a1[i][j] = abs(v1[i]-v1[j]);
			a2[i][j] = abs(v2[i]-v2[j]);
			cout<<a1[i][j]-a2[i][j]<<endl;
			if(a1[i][j]!=a2[i][j])fl=1;
		}
	}*/
	for(it=s1.begin();it!=s1.end();it++){ cout<<*it<<" ";}
	cout<<"\n";
	for(it1=s2.begin();it1!=s2.end();it1++){ cout<<*it1<<" ";}
	for(it=s1.begin(),it1 = s2.begin();it!=s1.end(),it1!=s2.end();it++,it1++){
		cout<<*it<<" "<<*it1<<endl;
		if(*it!=*it1)fl=1;
	}
	if(fl==1) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
	return 0;
}
