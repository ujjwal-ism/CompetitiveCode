#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int t;cin>>t;
	ll a,b;
	while(t--){
		cin>>a>>b;
		while(a && a%2==0) a /= 2;
		while(b && b%2==0) b /= 2;
		if(a == 1 || b == 1)
			cout<<"Y\n";
		else
			cout<<"N\n";
	}

	return 0;
}