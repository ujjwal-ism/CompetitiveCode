#include <bits/stdc++.h>

using namespace std;


int main()
{
	int t;scanf("%d",&t);
	double a,b,e;
	while(t--){
		scanf("%lf%lf",&a,&b);
		e = sqrt(1.0 - (b*b/(a*a)));
		printf("%.3lf\n",2*a*e);
	}
	return 0;
}