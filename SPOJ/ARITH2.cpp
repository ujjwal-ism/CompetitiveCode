#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;cin>>t;
	long long a,b;
	char ch;
	while(t--){
		cin>>a;
		while(1){
			cin>>ch;
			if(ch == '=')
				break;
			cin>>b;
			if(ch == '+')
				a=a+b;
			else if(ch == '-')
				a=a-b;
			else if(ch == '/')
				a=a/b;
			else
				a=a*b;
		}
		cout<<a<<endl;
	}

	return 0;
}