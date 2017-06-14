#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(int argc, char const *argv[])
{
	int t;scanf("%d",&t);
	ll a,b,c,d;
	while(t--){
		scanf("%lld%lld%lld",&a,&b,&c);
		d = (a*a) - (2*b);
		printf("%lld\n",d );
	}
	return 0;
}