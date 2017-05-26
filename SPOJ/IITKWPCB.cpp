#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;
int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int t;cin>>t;
	ll n;
	while(t--){
		cin>>n;
		if(n==1){
			cout<<"0\n";continue;}
		for(ll i=floor(n/2);i>=(ll)1;i--){
			if(__gcd(i,n)==1){
				cout<<i<<"\n";
				break;
			}
		}
	}	
	return 0;
}