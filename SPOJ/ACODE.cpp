#include <bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;

int main(int argc, char const *argv[])
{
	int l,t;string s;
	while(1){
		cin>>s;
		if(s=="0")
			return 0;
		l = s.length();
		ll dp[l+1];
		dp[0]=1;dp[1]=1;
		for(int i=2;i<=l;i++){
			dp[i]=dp[i-1];
			t = 10*(s[i-2])
		}

	}
	return 0;
}