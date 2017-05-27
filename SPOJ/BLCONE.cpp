#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);

	int n;cin>>n;
	double R,H,L;
	while(n--){
		cin>>R>>H;
		L = sqrt(R*R+H*H);
		double lo = 0.0,hi = (double)2*H;
		int i=0;
		double mid,t;
		while(i<100){
			mid = (lo+hi)/(double)2;
			t = R*mid*mid*mid + (double)3*L*mid*mid - (double)6*L*H*H ;
			if(t < 0.0)
				lo = mid;
			else if(t > 0.0)
				hi = mid;
			else
				break;
			i++;
		}
		if(mid > 0.0 && mid <= H)
			printf("%.6f\n",mid );
		else
			printf("%.6f\n",H);
	}
	return 0;
}