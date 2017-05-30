#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

	int a[4],n[4];
	vector<int> v(4);
	int max,t;
	while(1){
		cin>>a[0]>>a[1]>>a[2]>>a[3];
		cin>>n[0]>>n[1]>>n[2]>>n[3];
		int z = 0;
		
		if(a[0]==-1)
			break;

		for(int i=0;i<4;i++){
			if(a[i]==0){
				v[i] = 1;z++;continue;}
			t = a[i]/n[i];
			v[i] = t;
			if(t*n[i]!=a[i])
				v[i]++;
		}
		if(z==4){
			cout<<"0 "<<"0 "<<"0 "<<"0\n";continue;
		}
		max = *max_element(v.begin(),v.end());
		for(int i=0;i<3;i++){
			cout<<(max*n[i] - a[i])<<" ";
		}
		cout<<(max*n[3] - a[3])<<"\n";
	}	

	return 0;
}