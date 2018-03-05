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
		int n;cin>>n;
		unordered_map<int,int> m;
		int x;
		for(int i=0;i<n;i++) {
			cin>>x;
			m[x]++;
		}

		cout<<m.size()<<endl;
	}

	return 0;
}