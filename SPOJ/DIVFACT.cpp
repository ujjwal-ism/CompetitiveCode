#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
#define MAX 50005
#define gc getchar_unlocked

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;

void si(int &x){
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}

bool prime[MAX];
vector<int> prime1;
void sieve(){
	for(int i=2;i*i<MAX;i++){
		if(prime[i]){
			for(int j=2*i;j<MAX;j+=i)
				prime[j] = false;
		}
	}
	for(int i=2;i<MAX;i++){
		if(prime[i])
			prime1.push_back(i);
	}
}

int main(int argc, char const *argv[])
{
	//std::ios::sync_with_stdio(false);cin.tie(NULL);
	for(int i=2;i<MAX;i++) prime[i] = true;
	sieve();
	int size = prime1.size();
	int t;si(t);

	while(t--){
		int n;si(n);
		if(n <= 1)
			printf("1\n");
		else{
			vector<int> v;
			for(int i = 0;(i < size && prime1[i] <= n); i++){
				int temp = 0;
				int p = prime1[i];
				while(n/p){
					temp += n/p;
					p *= prime1[i];
				}
				v.push_back(temp);
			}
			int l = v.size();
			ll ans = 1;
			for(int i=0;i<l;i++)
				ans = (ans*(ll)(v[i]+1))%mod;
			cout<<ans<<endl;	
		}
	}

	return 0;
}