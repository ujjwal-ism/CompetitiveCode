#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int r,b;cin>>r>>b;
	int q = (r+4)/2;
	int t = r+b;
	int l = sqrt(q*q - 4*t);
	cout<<(q+l)/2<<" "<<(q-l)/2<<"\n";

	return 0;
}