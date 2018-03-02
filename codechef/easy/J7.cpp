#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(int argc, char const *argv[])
{
   	//std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);	
	int t;scanf("%d",&t);
	while(t--) {
		float p,s;scanf("%f %f", &p,&s);

		float l = (p - sqrt(p*p - 24*s))/12.0;
		float sol = ((float)4*l*l*l + (float)2*s*l - l*l*p)/4.0;

		printf("%.2f\n",sol);
	}
   	
	return 0;
}