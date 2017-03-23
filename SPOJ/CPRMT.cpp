#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);
	string a,b;int n,m;
	while(cin>>a>>b){
		n = a.length();m = b.length();
		map<char,int> ma;char ch;
		std::vector<int> vis(m,0);

		for(int i=0;i<n;i++){
			ch = a[i];
			for(int j=0;j<m;j++){
				if(ch == b[j] && vis[j]==0){
					ma[ch]++;vis[j]=1;
					break;
				}
			}
		}
		map<char,int>::iterator it;int t;
		for(it = ma.begin();it!=ma.end();it++){
			for(int i=0;i<it->second;i++)
				cout<<it->first;
		}
		cout<<endl;
	}	

	return 0;
}