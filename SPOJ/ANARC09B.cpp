#include <bits/stdc++.h>

using namespace std;
typedef long long  ll;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll w,h,t;
	while(1){
		cin>>w>>h;
		if(w==0 || h==0) break;
		t = __gcd(w,h);
		cout<<(w*h)/(t*t)<<"\n";
	}	
	return 0;
}