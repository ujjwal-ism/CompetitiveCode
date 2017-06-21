#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;scanf("%d",&t);
	double n,y;
	while(t--){
		scanf("%lf",&n);
		y = n/2;
		y = ((double)4/(double)3*y*sqrt(y))/(n*n);
		y = (double)1 - y;
		printf("%.6lf\n",y);
	}
	return 0;
}