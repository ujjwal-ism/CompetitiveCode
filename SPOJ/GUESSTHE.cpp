#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	string s;
	while(1){
		cin>>s;
		if(s == "*") break;
		ll ans;
		vector<int> m,p;
		int l = s.length();
		for(int i=1;i<=l;i++){
			if(s[i-1] == 'Y')
				m.push_back(i);
			else
				p.push_back(i);
		}
		if(m.empty()){
			cout<<"-1\n";continue;
		}

		l = m.size();
		ans = m[0];
		for(int i=1;i<l;i++)
			ans = ((ll)m[i]*ans)/(__gcd((ll)m[i],ans));

		l = p.size();
		int flag = 1;
		for(int i=0;i<l;i++){
			if(ans%p[i]==0){
				cout<<"-1\n";flag = 0;break;
			}
		}
		if(flag) cout<<ans<<"\n";
	}	
	return 0;
}