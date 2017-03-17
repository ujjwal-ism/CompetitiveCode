#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(int argc, char const *argv[])
{
	int t,s;cin>>t;
	ll n;
	while(t--){
		cin>>n;
		s = 0;
		for(int i=1;i<14;i++){
			s+=n/pow(5,i);
		}
		cout<<s<<endl;
	}

	return 0;
}