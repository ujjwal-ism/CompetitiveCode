#include <bits/stdc++.h>
#define mod 314159
using namespace std;

int main(int argc, char const *argv[])
{
	int result[1000001],temp[1000001];
	result[1]=9;temp[1]=1;
	for(int i=2;i<=1000001;i++){
		result[i] = ((result[i-1]*9)%mod + temp[i-1])%mod;
		temp[i] = ((temp[i-1]*9)%mod + result[i-1])%mod;
	}

	int t,n;cin>>t;
	while(t--){
		scanf("%d",&n);
		printf("%d\n",result[n]);
	}
	return 0;
}