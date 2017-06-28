#include <bits/stdc++.h>

using namespace std;
typedef double d;

int main(int argc, char const *argv[])
{
	int t;scanf("%d",&t);
	d r1,r2,r3;
	while(t--){
		scanf("%lf%lf%lf",&r1,&r2,&r3);
		r1 = 1.0/r1;r2 = 1.0/r2;r3 = 1.0/r3;
		r1 = r1+r2+r3 + 2*sqrt(r1*r2+r2*r3+r3*r1);
		r1 = 1.0/r1;
		printf("%.6lf\n",r1);
	}
	return 0;
}