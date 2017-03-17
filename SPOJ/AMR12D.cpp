#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,l,f;cin>>t;
	string s;
	while(t--){
		f=0;
		cin>>s;
		l = s.length();
		for(int i=0;i<l;i++){
			if(s[i]!=s[l-1-i]){
				f = 1;break;
			}
		}
		if(f==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}