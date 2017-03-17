#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> f,ff;
	int t;cin>>t;
	int temp,tt;
	while(t--){
		cin>>temp;
		f.push_back(temp);
		cin>>temp;
		for(int i=0;i<temp;i++){
			cin>>tt;
			ff.push_back(tt);
		}
	}
	sort( ff.begin(), ff.end() );
	ff.erase( unique( ff.begin(), ff.end() ), ff.end() );
	int l = ff.size();
	int count=0;
	for(int i=0;i<l;i++){
		if(find(f.begin(),f.end(),ff[i])==f.end())
			count++;
	}
	cout<<count;

	return 0;
}