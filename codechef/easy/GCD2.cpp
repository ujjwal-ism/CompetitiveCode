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
		int a;cin>>a;
		string b;cin>>b;

		if(a == 0) cout<<b<<endl;
		else{
			int l = b.length();
			int m = 0;
			for(int i=0;i<l;i++) 
				m = (m*10 + (b[i] - '0'))%a;

			cout<<__gcd(m,a)<<endl;
		}
	}

	return 0;
}