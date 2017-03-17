#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;cin>>t;
	int n,f,tt;
	for(int i=1;i<=t;i++){
		cin>>n>>f;
		vector<int> v;
		for(int a=0;a<f;a++){
			cin>>tt;
			v.push_back(tt);
		}
		cout<<"Scenario"<<" #"<<i<<":"<<endl;

		std::sort(v.begin(), v.end(), std::greater<int>());
		int sum=0;
		int count=0;
		int flag = 0;
		for(int j=0;j<f;j++){
			count++;
			sum+=v[j];
			if(sum>=n){
				flag = 1;
				break;
			}
		}
		
		if(flag==0){
			cout<<"impossible"<<endl;
			cout<<endl;
		}
		else{
			cout<<count<<endl;
			cout<<endl;
		}
	}	
	return 0;
}