#include <bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;

int main(int argc, char const *argv[])
{
	ll t;cin>>t;
	ll n,sum,temp;
	while(t--){
		cin>>n;
		sum=0;
		for(ll i=0;i<n;i++){
			cin>>temp;
			sum=(sum+temp)%n;
		}
		if(sum==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

	return 0;
}