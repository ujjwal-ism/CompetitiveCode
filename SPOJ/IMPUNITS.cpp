#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll temp,a,b;
	int n;
	while(1){
		cin>>n; if(n == -1) break;

		a = 1,b = 1;
		for(int i=0;i<n-1;i++){
			cin>>temp; a *= temp;
			cin>>temp; b *= temp;
		}

		temp = __gcd(a,b);
		a = a/temp; b = b/temp;

		cout<<a<<" "<<b<<"\n";
	}	
	return 0;
}