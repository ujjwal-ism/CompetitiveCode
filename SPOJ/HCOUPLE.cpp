#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t;cin>>t;
	string s;
	for(int i=1;i<=t;i++){
		cin>>s;
		int value = 0;
		int l = s.length();
		for(int z=0;z<l;z++)
			value += s[z]-'0';
		s = (value%3==0)?"Yes":"No";
		cout<<"Case "<<i<<": "<<s<<"\n";
	}

	return 0;
}