#include <bits/stdc++.h>
#define mod 10000007
using namespace std;

int main(int argc, char const *argv[])
{
	int t,n;scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d",&n);
		long arr[n];
		for(int j=0;j<n;j++) scanf("%ld",&arr[j]);

		long count,sol = 0;
		for(long z=0;z<32;z++){
			count = 0;
			for(int j=0;j<n;j++){
				if(!(arr[j]&(1<<z))) count++;
			}
			sol = (sol + count*(n-count)*2)%mod;
		}
		printf("Case %d: %ld\n",i,sol);
	}
	return 0;
}