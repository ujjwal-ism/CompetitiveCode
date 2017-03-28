#include <bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;

int main(int argc, char const *argv[])
{	
	std::ios::sync_with_stdio(false);

	int l;
	string s;
	while(1){
		cin>>s;
		if(s[0]=='0')
			break;
		l = s.length();
		vector<ll> dp(l,0);
		dp[0]=1;
		int q;
		for(int i=1;i<l;i++){
			q = 10*(s[i-1]-'0') + (s[i]-'0');
			if(s[i]-'0')
				dp[i] = dp[i-1];
			if(q>=10 && q<=26){
				if(i==1)
					dp[i] = dp[i]+1;
				else
					dp[i] = dp[i]+dp[i-2];
			}
		}
		cout<<dp[l-1]<<"\n";
	}
	return 0;
}