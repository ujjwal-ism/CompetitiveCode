#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
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

int main(int argc, char const *argv[])
{
	//std::ios::sync_with_stdio(false);cin.tie(NULL);
	int t;scanf("%d",&t);
	while(t--){
		float n,sd;scanf("%f%f",&n,&sd);
		float zero = 0;

		if(n == 1){
				printf("-1\n");
		}
		else{
			float ans = (n*sd)/(float)sqrt(n-1);
			for(int i=0;i<(int)(n-1);i++)
				printf("%f ",zero);
			printf("%f\n",ans);
		}
	}

	return 0;
}