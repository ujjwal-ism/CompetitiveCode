#include <bits/stdc++.h>
#define mod 1000000007

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;


int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	llu r,k,t;

	llu cof[21][2],sum[21][2];
	cof[0][0] = 0;cof[0][1] = 1;
	cof[1][0] = 1;cof[1][1] = 0;
	sum[0][0] = 0;sum[0][1] = 1;

	for(int i=2;i<21;i++){
		cof[i][0] = cof[i-1][0] + cof[i-2][0];
		cof[i][1] = cof[i-1][1] + cof[i-2][1];
	}

	for(int i=1;i<21;i++){
		sum[i][0] = sum[i-1][0] + cof[i][0];
		sum[i][1] = sum[i-1][1] + cof[i][1];
	}

	while(1){
		cin>>r;
		if(r == 0) break;
		cin>>k>>t;

		llu a,b;
		a = sum[r-1][0]; // y
		b = sum[r-1][1]; // x

		llu x,y,R;
		for(x = 1;(t-b*x)%a;x++);

		y = (t-b*x)/a;
		R = k*(cof[r-1][0]*y + cof[r-1][1]*x);
		cout<<x<<" "<<y<<" "<<R<<"\n";
	}

	return 0;
}