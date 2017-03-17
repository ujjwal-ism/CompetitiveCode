#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

int main(int argc, char const *argv[])
{
	ll n;cin>>n;
	if(n<=1)
		cout<<"TAK";
	else{
		if(!(n&(n-1)))
			cout<<"TAK";
		else
			cout<<"NIE";
	}
	return 0;
}