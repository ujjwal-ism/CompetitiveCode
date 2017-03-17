#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,m;cin>>t;
	while(t--){
		cin>>n>>m;
		std::vector<int> v(n),q(m);
		for(int i=0;i<n;i++)
			cin>>v[i];
		for(int i=0;i<m;i++)
			cin>>q[i];

		if(*max_element(v.begin(),v.end())>=*max_element(q.begin(),q.end()))
			cout<<"Godzilla"<<endl;
		else
			cout<<"MechaGodzilla"<<endl;
	}
	return 0;
}