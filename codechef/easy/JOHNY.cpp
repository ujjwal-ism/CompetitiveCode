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
 		int n,k;cin>>n;
 		vector<int> v(n);
 		
 		for(int i=0;i<n;i++) cin>>v[i];
		cin>>k;

		int jh = v[k-1];
		sort(v.begin(),v.end());

		int ans = lower_bound(v.begin(),v.end(),jh) - v.begin();
		cout<<ans+1<<endl;
 	}

	return 0;
}