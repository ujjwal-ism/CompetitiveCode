#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

int main(int argc, char const *argv[])
{
	ll t;cin>>t;
	ll n,tmp;
	while(t--){
		cin>>n;
		if(n%4==0){
			tmp = (n/4)-1;
			tmp*=1000;
			tmp+=942;
		}
		else{
			tmp = n/4;
			tmp*=1000;
			if(n%4==1)
				tmp+=192;
			else if(n%4==2)
				tmp+=442;
			else
				tmp+=692;
		}
		cout<<tmp<<endl;
	}
	return 0;
}