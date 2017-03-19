#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;

int main(int argc, char const *argv[])
{
	ll a[10][65];
	for(int i=0;i<10;i++)
		a[i][1] = 1;
	ll result[65];result[1]=10;
	for(int i=2;i<65;i++){
		a[0][i] = result[i-1];
		result[i] = result[i-1];
		for(int j=1;j<10;j++){
			a[j][i]=a[j-1][i]-a[j-1][i-1];
			result[i]+=a[j][i];
		} 
	}
	int t,q,n;scanf("%d",&t);
	while(t--){
		scanf("%d%d",&q,&n);
		printf("%d %lld\n",q,result[n]);
	}

	return 0;
}