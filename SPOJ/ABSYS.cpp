#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,l;cin>>t;
	string s;
	while(t--){
		cin>>s;
		l = s.length();
		vector<int> v;
		for(int i=0;i<l;i++){
			if(isspace(s[i]))
				v.push_back(i);
		}
		cout<<v.size()<<endl;
		string s1,s2,s3;
		int l1,l2;

		l1 = v[2]-v[1];
			cout<<l1;
		l2 = l-v[3];
		s1 = s.substr(0,v[0]);
		s2 = s.substr(v[1],l1);
		s3 = s.substr(v[3],l2);
		cout<<s1<<" "<<s2<<" "<<s3<<endl;
	}
	return 0;
}