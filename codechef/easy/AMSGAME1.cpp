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
		int n,a,b,ans;cin>>n;
		if(n == 1) {
			cin>>a;
			cout<<a<<endl;
		}
		else{
			cin>>a>>b;
			ans = __gcd(a,b);
			for(int i=2;i<n;i++){
				cin>>a;
				ans = __gcd(ans, a);
			}
			cout<<ans<<endl;
		}
	}

	return 0;
}