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

 		int l = 0;
 		for(int i=1;i<n;i++) 
 			if(arr[i] < arr[i-1]) l++;

 		int g = 0;
 		for(int i=0;i<n-1;i++) {
 			for(int j=i+1;j<n;j++)
 				if(arr[j] < arr[i]) g++;
 		}

 		if(l == g) cout<<"YES\n";
 		else cout<<"NO\n";
 	}

	return 0;
}