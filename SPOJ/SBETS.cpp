#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t,x,y;cin>>t;
	string a,b,w;
	while(t--){
		unordered_map<string,int> m;
		for(int i=0;i<16;i++){
			cin>>a>>b>>x>>y;
			w = (x > y)?a:b;
			m[w]++;
		}
		
		unordered_map<string,int>::iterator it = m.begin();
		for(;it!=m.end();it++){
			if(it->second == 4){
				cout<<it->first<<"\n";break;
			}
		}
	}
	return 0;
}