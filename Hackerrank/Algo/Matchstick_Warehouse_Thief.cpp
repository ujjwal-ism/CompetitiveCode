#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(int argc, char const *argv[])
{
   	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);	
   	int n,c;cin>>n>>c;
   	vector< pair<ll,ll> > v(c);

   	ll x,y;
   	for(int i=0;i<c;i++){
   		cin>>x>>y;
   		v[i].first = y;
   		v[i].second = x;
   	}

   	sort(v.begin(),v.end());

   	int countBox = 0;
   	ll matchSticks = 0;
   	for(int i = c-1;i >= 0; i--){
   		if(countBox + v[i].second <= n){
   			matchSticks += v[i].second*v[i].first;
   			countBox += v[i].second;
   		}
   		else{
   			matchSticks += (n - countBox)*v[i].first;
   			break;
   		}
   	}
   	cout<<matchSticks;
   	
	return 0;
}