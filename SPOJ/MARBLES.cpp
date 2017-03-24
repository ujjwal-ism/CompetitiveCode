#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;

ll nCr(ll n,ll r){
	if(2*r>n)
		r = n-r;
	ll res = 1;

	for(int i=0;i<r;i++)
		res = res*(n-i)/(i+1);

	return res;
}

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);
	int t,n,k;cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<nCr((ll)n-1,(ll)k-1)<<endl;
	}

	return 0;
}