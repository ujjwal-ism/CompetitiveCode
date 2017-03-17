#include <bits/stdc++.h>
typedef unsigned long long LL;
#define MOD 10000007 

using namespace std;
LL pow(LL a, LL b) {
LL x = 1, y = a;
    while(b > 0) {
        if(b%2 == 1) {
            x=(x*y);
            if(x>MOD) x%=MOD;
        }
        y = (y*y);
        if(y>MOD) y%=MOD;
        b /= 2;
    }
    return x;
}


int main(int argc, char const *argv[])
{
	LL n,k,temp;
	while(1){
		scanf("%llu%llu",&n,&k);
		if(n==0&&k==0)
			break;
		temp = (2*pow(n-1,k))%MOD;
		temp =(temp+pow(n,k))%MOD;
		temp =(temp+2*pow(n-1,n-1))%MOD;
		temp =(temp+pow(n,n))%MOD;

		printf("%llu\n",temp );;
	}
	return 0;
}