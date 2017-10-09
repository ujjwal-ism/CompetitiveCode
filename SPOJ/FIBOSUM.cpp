#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;

ll fib_sum(ll n){
	
	ll fib[3][3] = {{1,0,0},{1,0,1},{1,1,1}};
	ll res[3][3] = {{1,0,0},{0,1,0},{0,0,1}};
	ll temp[3][3] = {{0,0,0},{0,0,0},{0,0,0}};

	while(n){	
		if(n&1){
			memset(temp,0,sizeof(temp));
			for(int i=0;i<3;i++)
				for(int j=0;j<3;j++)
					for(int k=0;k<3;k++)
						temp[i][j] = (temp[i][j] + (res[i][k]*fib[k][j])%mod)%mod;

			for(int i=0;i<3;i++)
				for(int j=0;j<3;j++)
					res[i][j] = temp[i][j];
		}
		memset(temp,0,sizeof(temp));
		for(int i=0;i<3;i++)
			for(int j=0;j<3;j++)
				for(int k=0;k<3;k++)
					temp[i][j] = (temp[i][j] + (fib[i][k]*fib[k][j])%mod)%mod;

		for(int i=0;i<3;i++)
			for(int j=0;j<3;j++)
				fib[i][j] = temp[i][j];

		n /= 2;
	}

	return (res[0][0]+res[2][0])%mod;
}

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int t;cin>>t;
	while(t--){
		ll n,m;cin>>n>>m;
		ll sum_n,sum_m;
		if(n == 0 || n == 1)
			sum_n = 0;
		else
			sum_n = fib_sum(n-2);
		
		if(m == 0)
			sum_m = 0;
		else if(m == 1)
			sum_m = 1;
		else
			sum_m = fib_sum(m-1);

		ll ans = sum_m - sum_n;
		if(ans < 0) ans += mod;

		cout<<ans<<endl;
	}

	return 0;
}