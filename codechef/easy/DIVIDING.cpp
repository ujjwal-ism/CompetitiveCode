#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(int argc, char const *argv[])
{
   	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);		
	ll n;cin>>n;
	ll req = (n*n + n)/2;
	ll sum = 0 , temp;
	for(int i=0;i<n;i++) {
		cin>>temp;
		sum += temp;
	} 

	if(sum == req) cout<<"YES\n";
	else cout<<"NO\n";

	return 0;
}