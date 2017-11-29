#include <bits/stdc++.h>
#define endl '\n'
#define N 10000
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int s[N];

void sieve(){
	vector<bool> prime(N+1,false);

	for(int i = 2; i < N; i += 2)
		s[i] = 2;

	for(int i = 3; i < N; i += 2 ){
		if(prime[i] == false){
			s[i] = i;

			for(int j = i; j*i < N ;j += 2){
				if(prime[i*j] == false){
					prime[i*j] = true;
					s[i*j] = i;
				}
			}
		}
	}
}

void computePrimefactor(unordered_map<int,int> &m,int a){
	int curr = s[a];
	int cnt = 1;

	while(a > 1){
		a = a/s[a];
		if(curr == s[a]){
			cnt++;
			continue;
		}
		m[curr] += cnt;
		curr = s[a];
		cnt = 1;
	}
}

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	sieve();

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