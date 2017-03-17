#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;cin>>t;
	double r;
	for(int i=1;i<=t;i++){
		cin>>r;
		r = 4*r*r+0.25;
		printf("Case %d: %.2lf\n",i,r );
	}
	return 0;
}