#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	while(1){
		cin>>n;
		if(n==0)
			return 0;
		std::map<int, int> m;
		for(int i=0;i<n;i++){
			cin>>m[i+1];
		}
		std::map<int,int>::iterator it;
		int i=1,flag=0;
		for(it = m.begin();it!=m.end();it++,i++){
			if(m[it->second]!=i){
				cout<<"not ambiguous"<<endl;flag=1;
				break;
			}
		}
		if(flag==0)
			cout<<"ambiguous"<<endl;
	}
	return 0;
}