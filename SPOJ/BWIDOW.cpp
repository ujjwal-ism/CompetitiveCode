#include <bits/stdc++.h>

using namespace std;
typedef long ll;
int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t,n;cin>>t;
	while(t--){
		cin>>n;
		ll in[n+1],out[n+1];
		for(int i=1;i<=n;i++){
			cin>>in[i]>>out[i];
		}

		int max = in[1];
		int idx = 1;
		for(int i=2;i<=n;i++){
			if(in[i] > max){
				max = in[i];
				idx = i;
			}
		}

		int ans = -1;
		int j;
		for(j=1;j<=n;j++){
			if(j!=idx && out[j] >= max) break;
		}
		if(j==n+1)
			cout<<idx<<"\n";
		else
			cout<<"-1\n";
	}	

	return 0;
}