#include <bits/stdc++.h>
#define mod 1000000007

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	priority_queue <int> pq[7];
	
	ll ans = 0;
	int n,p,x,y;cin>>n>>p;
	while(n--){
		cin>>x>>y;
		if(pq[x].empty()){
			pq[x].push(y);
			ans++;
		}
		else{
			while(!pq[x].empty() && pq[x].top() > y){
				pq[x].pop();
				ans++;
			}
			if(pq[x].empty() || pq[x].top() != y){
				pq[x].push(y);
				ans++;
			}
		}
	}
	cout<<ans;

	return 0;
}