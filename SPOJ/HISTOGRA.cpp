#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;

inline ll max_area(ll arr[],ll n){
	stack <ll> st;

	ll ret = 0;
	ll temp;

	ll i = 0;
	while(i < n){
		if(st.empty() || arr[i] >= arr[st.top()])
			st.push(i++);
		else{
			ll tp = st.top();
			st.pop();

			temp = arr[tp]*(st.empty()?i:(i-st.top()-1));
			if(temp > ret)
				ret = temp;
		}
	}

	while(!st.empty()){
		ll tp = st.top();
		st.pop();

		temp = arr[tp]*(st.empty()?i:(i-st.top()-1));
		if(temp > ret)
			ret = temp;
	}

	return ret;
}

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	while(1){
		ll n;cin>>n;
		if(n == 0) break;

		ll arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];

		ll ans = max_area(arr,n);
		cout<<ans<<endl;
	}

	return 0;
}