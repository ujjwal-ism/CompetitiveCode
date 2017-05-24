#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);

	int n;cin>>n;
	vector<ll> v(n),q(n-1);
	cin>>v[0];
	for(int i=1;i<n;i++){
		cin>>v[i];
		q[i-1] = v[i]-v[i-1];
	}
	ll t = __gcd(q[0],q[1]);
	for(int i=2;i<n-1;i++){
		t = __gcd(t,q[i]);
		if(t==1)
			break;		
	}
	
	int count = 0;
	for(int i=0;i<n-1;i++)
		count += (q[i]/t)-1;

	cout<<count;

	return 0;
}