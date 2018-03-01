#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(int argc, char const *argv[])
{
   	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);		
 	int t;cin>>t;
 	while(t--) {
 		string s;cin>>s;
 		if(s.find("010") != string::npos || s.find("101") != string::npos)
 			cout<<"Good\n";
 		else
 			cout<<"Bad\n";
 	}

	return 0;
}