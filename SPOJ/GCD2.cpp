#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int gcd(int x,int y){
	if(x == 0)
		return y;
	return gcd(y%x,x);
}

int main()
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int t;cin>>t;
	int a,l;string b;
	while(t--){
		cin>>a>>b;
		if(a==0){
			cout<<b<<endl;continue;}
		l = b.length();
		int mod = 0;
		for(int i=0;i<l;i++){
			mod = (mod*10 + b[i]-'0')%a;
		}
		cout<<gcd(mod,a)<<endl;
	}

	return 0;
}