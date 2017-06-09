#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;
typedef long double d;

int main(int argc, char const *argv[])
{
	int t;scanf("%d",&t);
	ll b,n;

	for(int i=1;i<=t;i++){
		scanf("%llu%llu",&b,&n);
		if(b == 0 || b == 1 || n == 0){
			printf("Case %d: Math Error!\n",i);continue;
		}
		d ans = log((d)n)/log((d)b);
		printf("Case %d: %0.5Lf\n",i,ans );
	}	
	return 0;
}