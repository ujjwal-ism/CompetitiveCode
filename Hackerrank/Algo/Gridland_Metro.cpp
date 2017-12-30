#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long llu;


ll utility(vector< pair<ll,ll> > v){
	int n = v.size();

	stack<pair<ll,ll> > s;

	sort(v.begin(),v.end());

	s.push(v[0]);
	for(int i = 1; i < n ; i++){
		pair<ll,ll> top = s.top();

		if(top.second < v[i].first)
			s.push(v[i]);

		else if(top.second < v[i].second){
			top.second = v[i].second;
			s.pop();
			s.push(top);
		}
	}

	ll ret = 0;
	while(!s.empty()){
		ret += (s.top().second - s.top().first + 1);
		s.pop();
	}

	return ret;
}

int main(int argc, char const *argv[])
{
   	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	map<ll, vector< pair<ll,ll> > > m;
   	
   	ll n,M,k;cin>>n>>M>>k;

   	ll r,c1,c2;
   	for(int i = 0; i < k ; i++){
   		cin>>r>>c1>>c2;
   		m[r].push_back(make_pair(c1,c2));
   	}

   	ll railtrackTotalLength = 0;

	map<ll, vector< pair<ll,ll> > >::iterator it;	
	for(it = m.begin(); it != m.end(); it++){
		railtrackTotalLength += utility(it->second);
	}

	cout<<(n*M - railtrackTotalLength);   	

	return 0;
}