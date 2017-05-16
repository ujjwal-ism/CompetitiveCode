#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int t;cin>>t;
	int a,b;
	while(t--){
		cin>>a>>b;
		if(a%2==1 && b%2==1)
			cout<<"Ramesh"<<"\n";
		else
			cout<<"Suresh"<<"\n";
	}

	return 0;
}