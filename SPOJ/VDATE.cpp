#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int t;cin>>t;
	ll x,y;
	for(int i=0;i<t;i++){
		cin>>x>>y;
		if(y > x)
			cout<<"0\n";
		else if(y == x)
			cout<<"-1\n";
		else{
			ll date = x - y;
			ll temp = sqrt(date);
			ll count = 0;
			for(int i=1;i<=temp;i++){
				if(i*i == date && i > y) count++;
				
				else if(date%i == 0 ){
						if(i>y) count++;
						if((date/i) > y) count++;
					}
			}

			cout<<count<<"\n";
		}
	}

	return 0;
}