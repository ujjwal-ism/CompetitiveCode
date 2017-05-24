#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	while(1){
		cin>>n;
		if(n==0)
			break;
		int v[n];
		for(int i=0;i<n;i++)
			cin>>v[i];
		sort(v,v+n);

		int flag = 0;
		for(int i=0;i<n-1;i++){
			if(v[i+1] - v[i] > 200){
				flag = 1;break;
			}
		}
		if(flag==0){
			if(2*(1422-v[n-1]) > 200){
				flag = 1;
			}
		}
		if(flag == 0)
			cout<<"POSSIBLE\n";
		else
			cout<<"IMPOSSIBLE\n";
	}
	
	return 0;
}