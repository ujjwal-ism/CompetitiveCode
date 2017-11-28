#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int id,cid;
		int ans = 0;
		while(n--){
			cin>>id>>cid;
			ans += id-cid;
		}
		cout<<ans<<endl;
	}

	return 0;
}