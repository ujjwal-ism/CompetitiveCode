#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;cin>>n;
	if(n%10==0)
		cout<<2;
	else{
		cout<<1<<endl;
		cout<<n%10;
	}
	return 0;
}