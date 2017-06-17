#include <bits/stdc++.h>

using namespace std;
typedef long ll;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t,n;cin>>t;
	ll a;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a;
			if(a < 0)
				cout<<a<<" ";
			else if(a > 5 || a == 0 || a == 3 || a == 4)
				cout<<"-4 ";
			else if(a == 2)
				cout<<"-2 ";
			else
				cout<<"-3 ";
		}
		cout<<"\n";
	}

	return 0;
}