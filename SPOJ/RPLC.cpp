#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(int argc, char const *argv[])
{
	int t;cin>>t;
	ll n;
	for(int k=1;k<=t;k++){
		cin>>n;
		ll a[n],s[n];
		cin>>a[0];s[0]=a[0];

		for(ll i=1;i<n;i++){
			cin>>a[i];
			s[i]=a[i]+s[i-1];
		}
		ll min = s[0];
		ll index=0;
		for(ll i=1;i<n;i++){
			if(s[i]<=min){
				min = s[i];index = i;
			}
		}
		if(min>=0)
			cout<<"Scenario #"<<k<<": 1"<<endl;
		else{
		ll ans=0;
		for(ll i=0;i<=index;i++)
			ans+=a[i];

		cout<<"Scenario #"<<k<<": "<<1-ans<<endl;
		}
	}
	return 0;
}