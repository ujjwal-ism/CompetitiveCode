#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,i;cin>>n;
	if(n%2==0){
		cout<<n/2<<endl;
		for(i=1;i<=(n/2);i++)
			cout<<2<<" ";
	}
	else{
		cout<<(n-1)/2<<endl;
		for(i=1;i<=(n-1)/2-1;i++)
			cout<<2<<" ";
		cout<<3;
	}
	return 0;
}