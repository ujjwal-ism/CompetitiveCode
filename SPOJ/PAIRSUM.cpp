#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
#define gc getchar_unlocked

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;

inline void si(ll &x){
    register ll c = gc();
    x = 0;
    ll neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}

inline void si1(int &x){
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}

int main(int argc, char const *argv[])
{
	//std::ios::sync_with_stdio(false);cin.tie(NULL);
	int n;si1(n);
	ll arr[n+1];arr[0] = 0;
	ll square[n+1];square[0] = 0;

	for(int i=1;i<=n;i++){
		si(arr[i]);
		square[i] = square[i-1] + arr[i]*arr[i];
		arr[i] = arr[i-1] + arr[i]; 
	}

	int m;si1(m);
	for(int i=0;i<m;i++){
		int u,v;
		si1(u);si1(v);
		ll temp = ((arr[v+1] - arr[u])*(arr[v+1] - arr[u]) - (square[v+1] - square[u]))/2;
		printf("%lld\n",temp + (square[v+1] - square[u]) ); 
	}

	return 0;
}