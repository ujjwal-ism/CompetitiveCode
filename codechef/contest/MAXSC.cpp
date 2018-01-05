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
   		ll arr[n][n];

   		for(int i=0;i<n;i++){
   			for(int j=0;j<n;j++)
   				cin>>arr[i][j];
   		}

   		ll local_max = -1 , prev_max = 10000000000;
   		ll sol = 0;
   		bool flag = false;

   		for(int i = n-1; i >=0; i--){
   			local_max = -1;
   			for(int j = 0; j < n; j++){
   				if(arr[i][j] < prev_max && arr[i][j] > local_max)
   					local_max = arr[i][j];
   			}
   			if(local_max == -1){
   				flag = true;
   				break;
   			}
   			prev_max = local_max;
   			sol += local_max;
   		}

   		if(flag)
   			cout<<-1<<endl;
   		else
   			cout<<sol<<endl;
   	}	
	return 0;
}