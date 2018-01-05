#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(int argc, char const *argv[])
{
   	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);	
   	int t;cin>>t;
   	while(t--){
   		int a,b,c,d;cin>>a>>b>>c>>d;
   		map<int,int> m;
   		m[a]++ ; m[b]++ ; m[c]++ ; m[d]++;

   		map<int,int>::iterator it = m.begin();
   		if(m.size() == 1 || (m.size() == 2 && it->second == 2))
   			cout<<"YES\n";
   		else
   			cout<<"NO\n";
   	}	
   	
	return 0;
}