#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

void sieve(vector<int> &v) {
	bool prime[2500];
	memset(prime, true, sizeof(prime));

	for(int i = 2; i*i < 2500; i++) {
		if(prime[i]) {
			for(int j = i*2; j < 2500; j += i)
				prime[j] = false;
		}
	}

	for(int i=2;i<2500;i++){
		if(prime[i])
			v.push_back(i);
	}
}

int main(int argc, char const *argv[])
{
   	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);		
	vector<int> v;
	sieve(v);

	int t;cin>>t;
	while(t--) {
		int x,y;cin>>x>>y;
		int pos = lower_bound(v.begin(),v.end(),x+y) - v.begin();
		pos = (v[pos] == (x + y)) ? pos+1 : pos;

		cout<<v[pos]-(x+y)<<endl;
	}

	return 0;
}