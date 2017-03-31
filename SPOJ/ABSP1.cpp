#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef unsigned long long ll;
int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int t,n;cin>>t;
	while(t--){
		cin>>n;
		vector<ll> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		ll sum=a[1]-a[0],prev = a[1]-a[0];
		for(int i=2;i<n;i++){
			sum += prev + i*(a[i]-a[i-1]);
			prev += i*(a[i]-a[i-1]);
		}
		cout<<sum<<endl;
	}

	return 0;
}