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
   		int n,m;cin>>n>>m;
   		bool arr[n+1] = {false};
   		bool flag = true;
   		
   		int temp;
   		for(int i=0;i<m;i++) {
   			cin>>temp;
   			arr[temp] = true;
   		}

   		for(int i = 1;i <= n; i++){
   			if(arr[i] == false) {
   				if(!flag) flag = !flag;
   				else{
   					cout<<i<<" ";
   					flag = !flag;
   					arr[i] = true;
   				}
   			}
   		}
   		cout<<endl;
   		for(int i=2;i<=n;i++){
   			if(!arr[i]) cout<<i<<" ";
   		}
   		cout<<endl;
   	}		
   	
	return 0;
}