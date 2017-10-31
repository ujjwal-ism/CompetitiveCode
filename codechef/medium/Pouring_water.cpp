#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
#define gc getchar_unlocked

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;

/*inline void si(int &x){
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}*/

inline int sol(int x,int y,int c){
	
	int ans = 1, a = x,b = 0,temp;
	
	while(a != c && b != c){
		temp = min(a,y-b);
		a = a - temp;
		b = b + temp;
		ans++;

		if(b == c || a == c) break;
		if(b == y) b = 0,ans++; 
		else if(a == 0) a = x,ans++;
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	//std::ios::sync_with_stdio(false);cin.tie(NULL);
	int t;scanf("%d",&t);
	while(t--){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);

		if((c > a && c > b) || (c%__gcd(a,b) != 0)) printf("-1\n");
		else if(c == 0) printf("0\n");
		else printf("%d\n",min(sol(a,b,c),sol(b,a,c)));
	}

	return 0;
}