#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,a;cin>>n;
	string s = to_string(n);
	int t = 1;
	std::map<int, int> m;
	while(1){
		a=0;
		for(int i=0;i<s.length();i++)
			a += (s[i]-'0')*(s[i]-'0');

		if(a==1){
			cout<<t;return 0;
		}
		if(m[a]!=0){
			cout<<"-1";return 0;
		}
		else
			m[a]=1;
		s = to_string(a);
		t++;
	}
	return 0;
}