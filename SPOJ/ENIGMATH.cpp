#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
	if(a==0)
		return b;
	return gcd(b%a,a);
}

int main(int argc, char const *argv[])
{
	int t,a,b,g;cin>>t;
	while(t--){
		cin>>a>>b;
		g = gcd(a,b);
		printf("%d %d\n",b/g,a/g );
	}
	return 0;
}