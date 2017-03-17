#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	string s;
	while(t--){
		cin>>s;
		int len = s.length();
		stack<char> c;
		for(int i=0;i<len;i++){
			if(isalpha(s[i]))
				cout<<s[i];
			else if(s[i]==')'){
				cout<<c.top();
				c.pop();
				c.pop();
			}
			else
				c.push(s[i]);
		}
		cout<<endl;
	}
	return 0;
}