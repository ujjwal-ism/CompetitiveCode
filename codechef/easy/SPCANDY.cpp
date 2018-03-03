#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(int argc, char const *argv[])
{
   	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);		
	int t;cin>>t;
	while(t--) {
		ll n,k;cin>>n>>k;
		if(k == 0)
			cout<<0<<" "<<n<<endl;
		else
			cout<<n/k<<" "<<n%k<<endl;
	}

	return 0;
}