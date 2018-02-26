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
 		int g;cin>>g;
 		while(g--) {
 			int i,n,q;cin>>i>>n>>q;
 			if(i == 1){
 				if(n%2 == 0 || q == 1)
 					cout<<n/2<<endl;
 				else 
 					cout<<n/2 + 1<<endl;
 			}
 			else{
 				if(n%2 == 0 || q == 2)
 					cout<<n/2<<endl;
 				else
 					cout<<n/2 + 1<<endl;
 			}
 		}
 	}

	return 0;
}