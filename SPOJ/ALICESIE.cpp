#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		if(n%2 == 0)
			cout<<n/2<<endl;
		else
			cout<<n/2 + 1<<endl;
	}

	return 0;
}