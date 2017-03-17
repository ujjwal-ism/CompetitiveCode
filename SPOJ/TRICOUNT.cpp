#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

int main(int argc, char const *argv[])
{
	int t;cin>>t;
	ll n;
	while(t--){
		cin>>n;
		if(n%2==0)
			cout<<(2*n*n*n+5*n*n+2*n)/8<<endl;
		else
			cout<<(2*n*n*n+5*n*n+2*n-1)/8<<endl;
	}	
	return 0;
}