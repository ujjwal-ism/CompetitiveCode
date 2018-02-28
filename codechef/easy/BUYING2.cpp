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
 		int n,x;cin>>n>>x;

 		int sum = 0, temp, mn = 10000;
 		for(int i=0;i<n;i++){
 			cin>>temp;
 			sum += temp;
 			mn = min(mn,temp);
 		}

 		if(sum%x == 0) {
 			cout<<sum/x<<endl;
 		}
 		else{
 			if(sum/x == (sum-mn)/x){
 				cout<<-1<<endl;
 			}
 			else{
 				cout<<sum/x<<endl;
 			}
 		}
 	}

	return 0;
}