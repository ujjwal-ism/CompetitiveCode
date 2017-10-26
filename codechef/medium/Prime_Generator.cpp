#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
#define max 10000000000

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;

vector<int> primes;
int size;

void sieve(){
	int n = sqrt(max);
	bool prime[n+1];
	memset(prime,true,sizeof(prime));

	for(int p = 2;p*p<=n;p++){
		if(prime[p]){
			for(int i=2*p;i<=n;i+=p)
				prime[i] = false;
		}
	}

	for(int i=2;i<=n;i++){
		if(prime[i])
			primes.push_back(i);
	}
	size = primes.size();

	return;
}

inline void segmented_sieve(int a,int b){
	if(a == 1) a++;
	for(int i = a;i<=b;i++){
		bool flag = true;
		int sqt = sqrt(i);
		for(int j = 0;(primes[j] <= sqt && j < size);j++){
			if(i%primes[j] == 0){
				flag = false;
				break;
			}
		}
		if(flag) cout<<i<<endl;
	}

	return;
}

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	sieve();

	int t;cin>>t;
	while(t--){
		int a,b;cin>>a>>b;
		segmented_sieve(a,b);
		cout<<endl;
	}

	return 0;
}