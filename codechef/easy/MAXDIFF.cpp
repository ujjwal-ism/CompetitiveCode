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
 		int n,k;cin>>n>>k;
 		int arr[n];
 		int sum = 0;
 		for(int i=0;i<n;i++) {cin>>arr[i];sum += arr[i];}

 		sort(arr,arr+n);
 		int l = (k <= n/2 ) ? k : n-k;

 		int ch = 0;
 		for(int i=0;i<l;i++) {
 			sum -= arr[i];
 			ch += arr[i];
 		}

 		cout<<sum - ch<<endl;
 	}

	return 0;
}