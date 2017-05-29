#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

	ll n,k,m,num,deno,gd;
	while(1){
		cin>>n>>k;
		if(n==-1 || m ==-1)
			break;

		m = k/2;
		num = m*k - m*m - m;
		if(num == 0){
			cout<<"0\n";continue;
		}
		deno = (n*(n-1))/2;
		if(num == deno){
			cout<<"1\n";continue;
		}
		gd = __gcd(num,deno);

		cout<<num/gd<<"/"<<deno/gd<<"\n";
	}

	return 0;
}