#include <bits/stdc++.h>

using namespace std;
typedef long double ld;

int main(int argc, char const *argv[])
{
	int t;scanf("%d",&t);
	ld l,a,q,w,b,h;
	while(t--){
		scanf("%Lf%Lf",&l,&a);
		if(l*l - (ld)4*a < 0.0){
			printf("%d\n",-1);
		}
		else{
			q = sqrt(l*l - (ld)4*a);
			w = sqrt(l*l + (ld)4*a);
			q = q*w;
			b = sqrt((l*l-q)/(ld)2);
			h = sqrt((l*l+q)/(ld)2);
			printf("%.6Lf %.6Lf %.6Lf\n",b,h,l);
		}
	}
	return 0;
}