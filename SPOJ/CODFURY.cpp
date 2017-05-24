#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;
int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);

	int t;cin>>t;
	int n;
	ll b;
	while(t--){
		cin>>n>>b;
		vector<int> v(n);
		for(int i=0;i<n;i++)
			cin>>v[i];
		ll a = 0; // humans
		int s = 0; // stations
		int i = 0,j=1;
		while(i < n && v[i] > b)
			i++;
		if(i==n) {
			cout<<"0"<<" "<<"0"<<"\n";
			continue;
		}
		ll q = v[i];
		j = i+1;

		while(j<n){
			if(q + v[j] > b)
				break;
			q += v[j];
			j++;
		}
		s = j-i;
		a = q;
		q -= v[i];
		i++;
		while(j<n){
			if(q+v[j] > b){
				if(j-i > s){
					a = q;
					s = j-i;
				}
				else if(j-i == s && q < a){
					a = q;
				}
				q -= v[i];i++;
			}
			q += v[j];
			j++;
		}
		if(j-i > s){
			a = q;
			s = j-i;
		}
		else if(j-i == s && q < a && i!=0){
			a = q;
		}
		cout<<a<<" "<<s<<"\n";

	}
	return 0;
}