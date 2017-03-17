#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;cin>>n>>m;
	list<int> *adj;
	adj = new list<int>[n+1];
	int u,v;
	for(int i=0;i<m;i++){
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	std::vector<bool> visited(n,false);

	stack<int> st;
	st.push(1);
	int count=0;
	while(!st.empty()){
		int p = st.top();
		st.pop();

		if(visited[p]==false){
			count++;
			visited[p]=true;
		}
		else{
			cout<<"NO";
			goto END;
			break;
		}

		list<int>::iterator it;
		for(it=adj[p].begin();it!=adj[p].end();it++){
			if(!visited[*it])
				st.push(*it);
		}
	}
	if(count==n)
		cout<<"YES";
	else
		cout<<"NO";
	END :

	return 0;
}