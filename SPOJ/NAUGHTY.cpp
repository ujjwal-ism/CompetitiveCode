#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int n,x,y,temp,a;cin>>n;
	unordered_map<int,int> t,b;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		t[x]++;
		if(x!=y) b[y]++;
	}
	int ans = INT_MAX;
	unordered_map<int,int>::iterator it;
	for(it = t.begin();it!=t.end();it++){
		temp = it->first;
		a = it->second + b[temp];
		if(a >= (n+1)/2){
			ans = min(ans,((n+1)/2) - it->second);
			if(ans <=0) break;
		}
	}
	if(ans == INT_MAX)
		cout<<"Impossible";
	else if(ans <= 0)
		cout<<"0";
	else
		cout<<ans;

	return 0;
}