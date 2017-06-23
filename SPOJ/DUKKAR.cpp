#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;

int main(int argc, char const *argv[])
{
	int t;scanf("%d",&t);
	ll n,p,temp,a;
	while(t--){
		scanf("%llu%llu",&n,&p);
		temp = n;
		a = 1;
		while(temp){
			a *= (temp%p+1);
			temp /= p;
		}
		printf("%llu\n",1+n-a );
	}
	return 0;
}