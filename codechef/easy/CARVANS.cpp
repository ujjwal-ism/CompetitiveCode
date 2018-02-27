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
 		int count = 1;
 		int temp , mn;
 		cin>>temp;mn = temp;

 		for(int i=1;i<n;i++) {
 			cin>>temp;
 			if(temp <= mn ){
 				count++;
 				mn = temp;
 			}
 		}

 		cout<<count<<endl;
 	}

	return 0;
}