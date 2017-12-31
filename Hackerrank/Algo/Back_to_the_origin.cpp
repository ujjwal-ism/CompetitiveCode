#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(int argc, char const *argv[])
{
   	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   	ll x,y;cin>>x>>y;
   	int n;cin>>n;

   	ll tx,ty;
   	while(n--){
   		cin>>tx>>ty;
   		x -= tx;
   		y -= ty; 
   	}		

   	cout<<x<<" "<<y;
   	
	return 0;
}