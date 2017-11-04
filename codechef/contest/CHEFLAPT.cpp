#include <bits/stdc++.h>
#define endl '\n'
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
		int arr[101];
		memset(arr,0,sizeof(arr));

		int a;
		for(int i=0;i<n;i++){
			cin>>a;
			arr[a]++;
		}
		int ans;
		for(int i=1;i<101;i++){
			if(arr[i] == 1) {ans = i;break;}
		}

		cout<<ans<<endl;
	}

	return 0;
}