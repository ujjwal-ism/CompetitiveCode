#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;cin>>t;
	double n,a;
	while(t--){
		cin>>n;
		a = 0;
		for(int i=1;i<=(int)n;i++)
			a+=1/(double)i;
		a*=n;
		printf("%.2f\n",a );
	}
	return 0;
}