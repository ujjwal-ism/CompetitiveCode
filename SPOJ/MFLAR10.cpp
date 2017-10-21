#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;


int main(int argc, char const *argv[])
{
	//std::ios::sync_with_stdio(false);cin.tie(NULL);
	while(true){
		string s;
		getline(cin,s);
		if(s[0] == '*') break;
		
		string temp;
		int l = s.length();
		
		temp = tolower(s[0]);
		for(int i=1;i<l;i++){
			if(s[i-1] == ' ')
				temp += tolower(s[i]);
		}

		l = temp.length();
		bool flag = true;
		for(int i=1;i<l;i++){
			if(temp[i-1] != temp[i]){
				cout<<"N\n";
				flag = false;break;
			}
		}

		if(flag)
			cout<<"Y\n";
	}

	return 0;
}