#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,a,b;cin>>n>>a>>b;
	if((n-a)>b+1)
		cout<<b+1;
	else
		cout<<n-a;
	return 0;
}