#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;cin>>t;
	unsigned long long n;
	while(t--){
		cin>>n;
		cout<<((n*(3*n+1))/2)%1000007<<endl;
	}
	return 0;
}