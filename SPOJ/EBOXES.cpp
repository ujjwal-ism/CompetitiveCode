#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int t;cin>>t;
	ll n,k,f;
	int q;
	while(t--){
		cin>>n>>k>>q>>f;
		cout<<(k*f-n)/(k-1)<<endl;
	}

	return 0;
}