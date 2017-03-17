#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	ll sum,av;
	while(1){
		cin>>n;
		if(n==-1)
			return 0;
		vector<ll> v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		sum = 0;
		for(int i=0;i<n;i++)
			sum+=v[i];
		av = sum/n;
		if(av*n==sum){
			ll ans=0;
			for(int i=0;i<n;i++)
				if(v[i]>av)
					ans+=(v[i]-av);
			cout<<ans<<endl;;
		}
		else
			cout<<"-1"<<endl;

	}
	return 0;
}