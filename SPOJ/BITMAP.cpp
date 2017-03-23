#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);
	int t,n,m;cin>>t;
	while(t--){
		cin>>n>>m;
		vector< pair<int,int> > v;
		int a[n][m];string s;
		for(int i=0;i<n;i++){
			cin>>s;
			for(int j=0;j<m;j++){
				a[i][j] = s[j]-'0';
				if(a[i][j]==1)
					v.push_back(make_pair(i,j));
			}
		}
		
		int l = v.size();
		int min;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				min = 999999999;
				if(a[i][j]==1){
					cout<<"0"<<" ";continue;}
				for(int k=0;k<l;k++){
					if((abs(v[k].first - i)+abs(v[k].second - j)) < min)
						min = abs(v[k].first - i)+abs(v[k].second - j);
				}
				cout<<min<<" ";
			}
			cout<<endl;
		}
	}

	return 0;
}