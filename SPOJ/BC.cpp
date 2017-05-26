#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(int argc, char const *argv[])
{
	int t;scanf("%d",&t);
	ll n,m,k,h;
	for(int i=1;i<=t;i++){
		scanf("%lld%lld%lld",&n,&m,&k);
		int r = 0;
		h = n*m*k - 1;

		while(n>1){
			r++;
			if(n%2==0)
				n /= 2;
			else
				n = n/2 + 1;
		}
		while(m>1){
			r++;
			if(m%2==0)
				m /= 2;
			else
				m = m/2 + 1;
		}
		while(k>1){
			r++;
			if(k%2==0)
				k /= 2;
			else
				k = k/2 + 1;
		}

		printf("Case #%d: %lld %d\n",i,h,r);
	}
	return 0;
}