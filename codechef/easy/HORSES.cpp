#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(int argc, char const *argv[])
{
   	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   	int t;cin>>t;
   	while(t--) {
   		int n;cin>>n;
   		int arr[n];
   		for(int i=0;i<n;i++) cin>>arr[i];

   		sort(arr,arr+n);

   		int ans = arr[1] - arr[0];
   		for(int i=2;i<n;i++){
   			ans = min(ans , arr[i] - arr[i-1]);
   		}
   		cout<<ans<<endl;
   	}		
   	
	return 0;
}