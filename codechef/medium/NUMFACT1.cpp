#include <bits/stdc++.h>
#define endl '\n'
#define N 1000005
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

void computePrimefactor(unordered_map<int,int> &m,int n){
	int cnt = 0;
	while(n%2 == 0){
		cnt++;
		n /= 2;
	}

	m[2] += cnt;

	for(int i = 3; i <= sqrt(n); i += 2){
		cnt = 0;
		while(n%i == 0){
			cnt++;
			n /= i;
		}
		m[i] += cnt;
	}

	if(n > 2)
		m[n] += 1;
}

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		unordered_map<int,int> m;

		while(n--){
			int a;cin>>a;
			computePrimefactor(m,a);
		}

		unordered_map<int,int>::iterator it;
		ll ans = 1;
		for(it = m.begin();it != m.end(); it++){
			ans *= (ll)(it->second + 1);
		}

		cout<<ans<<endl;
	}		
	return 0;
}