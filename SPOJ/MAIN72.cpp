#include <bits/stdc++.h>
#define mod 1000000007

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n];
		int sum = 0;
		for(int i=0;i<n;i++) {
			cin>>arr[i];
			sum += arr[i];
		}

		bool subset[n+1][sum+1];
		for(int i=0;i<=n;i++)
			subset[i][0] = true;

		for(int j=1;j<=sum;j++)
			subset[0][j] = false;

		for(int i=1;i<=n;i++){
			for(int j=1;j<=sum;j++){
				if(j < arr[i-1])
					subset[i][j] = subset[i-1][j];
				else
					subset[i][j] = subset[i-1][j] || subset[i-1][j-arr[i-1]];
			}
		}

		ll sol = 0;
		for(int i=1;i<=sum;i++)
			if(subset[n][i])
				sol += i;

		cout<<sol<<"\n";
	}	

	return 0;
}