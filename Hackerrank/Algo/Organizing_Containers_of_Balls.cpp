#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(int argc, char const *argv[])
{
   	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);		
 	int t;cin>>t;
 	while(t--){
 		int n;cin>>n;
 		int arr[n][n];

 		for(int i=0;i<n;i++)
 			for(int j=0;j<n;j++)
 				cin>>arr[i][j];

 		ll a[n] = {0} , b[n] = {0};
 		for(int i=0;i<n;i++){
 			for(int j=0;j<n;j++){
 				a[i] += arr[i][j];
 				b[i] += arr[j][i];
 			}
 		}
 		sort(a,a+n);
 		sort(b,b+n);

 		bool flag = true;
 		for(int i=0;i<n;i++){
 			if(a[i]!=b[i]){
 				flag = false;
 				break;
 			}
 		}
 		if(flag)
 			cout<<"Possible\n";
 		else
 			cout<<"Impossible\n";
 	}

	return 0;
}