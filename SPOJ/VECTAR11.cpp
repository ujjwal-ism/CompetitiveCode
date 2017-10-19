#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
#define gc getchar_unlocked

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;

inline void si(int &x){
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}

int dp[1000006];

int main(int argc, char const *argv[])
{
	//std::ios::sync_with_stdio(false);cin.tie(NULL);
	dp[1] = 1 ,dp[2] = 0, dp[3] = 1,dp[4] = 1;
	for(int i=5;i<1000006;i++){
		int sqt = sqrt(i);
		if(sqt*sqt == i)
			dp[i] = 1;
		else{
			int flag = 1;
			int j=1;
			while(j*j < i){
				if(dp[i-(j*j)] == 0){
					flag = 0;break;
				}
				j++;
			}
			if(flag)
				dp[i] = 0;
			else
				dp[i] = 1;
		}
	}
	int t;si(t);
	while(t--){
		int n;si(n);
		if(dp[n])
			printf("Win\n");
		else
			printf("Lose\n");
	}

	return 0;
}