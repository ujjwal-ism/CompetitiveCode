#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int t,n,m,D,q;cin>>t;
	while(t--){
		cin>>n>>m>>D;
		int count = 0;
		for(int i=0;i<n;i++){
			cin>>q;
			while(q-D>0){
				count++;
				q -= D;
			}
		}
		if(count>=m)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

	return 0;
}