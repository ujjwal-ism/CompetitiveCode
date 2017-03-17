#include <bits/stdc++.h>

using namespace std;

int tot(int n){
	float r = n;
	for(int i=2;i*i<=n;i++){
		if(n%i == 0){
			while(n%i==0)
				n=n/i;
			r *= (1.0-1.0/(float)i); 
		}
	}
	if(n!=1)
		r*=(1.0-1.0/(float)n);
	return (int)r;
}

int main(int argc, char const *argv[])
{
	int t,n;cin>>t;
	while(t--){
		cin>>n;
		cout<<tot(n)<<endl;
	}
	return 0;
}