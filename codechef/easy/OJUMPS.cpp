#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(int argc, char const *argv[])
{
   	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);		
	ll a;cin>>a;
	a = a%6;
	if(a == 0 || a == 1 || a == 3 )
		cout<<"yes\n";
	else
		cout<<"no\n";

	return 0;
}