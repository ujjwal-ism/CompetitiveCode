#include <bits/stdc++.h>
#define MAX 50001
using namespace std;
typedef long long ll;
int arr[MAX];

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t,temp,n;cin>>t;
	ll sum;
	while(t--){
		map<int,int> m;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>temp;
			m[temp]++;
		}
		temp = m.size();
		ll s[temp];int k = 1;
		map<int,int>::iterator it = m.begin();
		s[0] = it->second;
		for(it++;it!=m.end();it++,k++){
			s[k] = s[k-1] + it->second;
		}

		sum = 0;
		it = m.begin();
		for(int i=0;i<temp;i++,it++) sum += (it->second*s[i]);

		cout<<sum<<"\n";
	}	
	return 0;
}