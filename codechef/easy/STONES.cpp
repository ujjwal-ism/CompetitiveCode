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
   		string j,s;cin>>j>>s;
   		map<char,int> m;
   		
   		int l = j.length();
   		for(int i=0;i<l;i++){
   			m[j[i]] = 1;
   		}

   		int count = 0;
   		l = s.length();
   		for(int i=0;i<l;i++){
   			if(m[s[i]]) count++;
   		}

   		cout<<count<<endl;
   	}

	return 0;
}