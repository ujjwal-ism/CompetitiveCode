#include <bits/stdc++.h>

using namespace std;

int rect(int n){
	int j=0;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0)
			j++;
	}
	return j;
}

int main(int argc, char const *argv[])
{
	int n;cin>>n;
	int ans=1;
	for(int i=2;i<=n;i++)
		ans+=rect(i);
	cout<<ans;

	return 0;
}