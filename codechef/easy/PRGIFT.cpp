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
		int n,k;cin>>n>>k;
		int count  = 0,temp;
		for(int i=0;i<n;i++) {
			cin>>temp;
			if(temp%2 == 0) count++;
		}

		if((count >= k && k > 0) || (k == 0 && count < n)) cout<<"YES\n";
		else cout<<"NO\n";
	}

	return 0;
}