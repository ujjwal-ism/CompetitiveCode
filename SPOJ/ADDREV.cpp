#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,a,b;cin>>n;
	string s,t;
	while(n--){
		cin>>a>>b;
		s = to_string(a);
		t = to_string(b);
		reverse(s.begin(),s.end());
		reverse(t.begin(),t.end());
		a = stoi(s);
		b = stoi(t);
		a = a+b;
		s = to_string(a);
		reverse(s.begin(),s.end());
        a = stoi(s);
		cout<<a<<endl;
	}

	return 0;
}
