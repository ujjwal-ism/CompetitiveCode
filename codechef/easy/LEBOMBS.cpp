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
		int n; cin>>n;
		string s; cin>>s;
		bool homes[n] = {false};

		if(n == 1 && s[0] == '1') homes[0] = true;
		if(s[0] == '1' && n > 1) {homes[0] = homes[1] = true;}
		if(s[n-1] == '1' && n > 1) {homes[n-1] = homes[n-2] = true;}

		for(int i = 1;i < n-1; i++) {
			if(s[i] == '1') {
				homes[i] = homes[i-1] = homes[i+1] = true;
			}
		} 

		int cnt = 0;
		for(int i=0;i<n;i++)
			if(!homes[i]) cnt++;

		cout<<cnt<<endl;
	}

	return 0;
}