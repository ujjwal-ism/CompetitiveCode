#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;cin>>n;
	std::vector<int> v;
	int a,b,temp=0;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		temp+=b-a;
		v.push_back(temp);
	}
	cout<<*max_element(v.begin(),v.end());
	return 0;
}