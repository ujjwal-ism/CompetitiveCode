#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	while(true){
		ll n;cin>>n;
		if(n == 0) break;

		cout<<((n+1)*(3*n+2))/2<<endl;
	}

	return 0;
}