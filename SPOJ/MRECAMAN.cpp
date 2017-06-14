#include <bits/stdc++.h>
#define MAX 500001
using namespace std;
typedef long long ll;
ll a[MAX];
unordered_map<ll,int> m;

int main(int argc, char const *argv[])
{
	a[0] = 0;m[0] = 1;
	ll temp;
	for(int i=1;i<=MAX;i++){
		temp = a[i-1] - i;
		if(temp > 0 && m[temp]!=1){
			a[i] = temp;
			m[temp] = 1;
		}
		else{
			a[i] = a[i-1] + i;
			m[a[i]] = 1;
		}
	}
	int t;
	while(1){
		scanf("%d",&t);
		if(t == -1) break;
		printf("%lld\n",a[t]);
	}

	return 0;
}