#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
#define gc getchar_unlocked

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;

inline void si(int &x){
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
	int t;si(t);
	while(t--){
		int a,b;
		si(a);
		si(b);
		int gcd = __gcd(a,b);

		int ans = 0;
		int x = sqrt(gcd);
		for(int i = 1;i<=x;i++){
			if(gcd%i == 0){
				if(gcd/i == i)
					ans += 1;
				else
					ans += 2;
			}
		}

		printf("%d\n",ans);
	}

	return 0;
}