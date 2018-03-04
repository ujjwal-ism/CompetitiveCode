#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(int argc, char const *argv[])
{
   	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);		
	int t,x;cin>>t;
	while(t--) {
		string a,b,temp;cin>>a>>b;
		int n = a.length();
		int m = b.length();

		if(m < n) {
			temp = a; a = b; b = temp;
			x = n; n = m; m = x;
		}

		int i,j = 0;
		for(i=0;i<n;i++){
			if(j == m) break;
			while(j < m){
				if(a[i] == b[j]) {j++;break;}
				j++;
			}
		}

		if(j == m && i != n) cout<<"NO\n";
		else cout<<"YES\n";
	}

	return 0;
}