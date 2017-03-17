#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	while(1){
		cin>>n;
		if(n==0)
			break;
		std::vector<int> v(n);
		for(int i=0;i<n;i++)
			cin>>v[i];

		stack<int> st;
		std::vector<int> w;
		int i=0;
		while(1){
			if(i==n-1){
				while(!st.empty() && st.top()<v[i]){
					w.push_back(st.top());
					st.pop();
				}
				if(st.empty()){
					w.push_back(v[i]);
					break;
				}
				else{
					w.push_back(v[i]);
					while(!st.empty()){
						w.push_back(st.top());
						st.pop();
					}
					break;
				}
			}
			if(i<n-1 && v[i]<v[i+1]){
				if(st.empty() || st.top()>v[i]){
					w.push_back(v[i]);
					i++;
				}
				else{
					w.push_back(st.top());
					st.pop();
				}
			}
			else{
				if(!st.empty() && st.top()<v[i]){
					w.push_back(st.top());st.pop();
				}
				st.push(v[i]);
				i++;
			}
		}
		int flag = 0;
		for(int i=1;i<=n;i++){
			if(i!=w[i-1]){
				flag = 1;break;
			}
		}
		if(flag==0)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
	return 0;
}