#include <bits/stdc++.h>
#define mod 1000000007

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;


int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int n;
	while(1){
		cin>>n;
		if(n == 0) break;

		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];

		stack<int> st;
		st.push(arr[0]);

		vector<int> v;
		for(int i=1;i<n;i++){
			while(!st.empty() && st.top() < arr[i]){
				v.push_back(st.top());
				st.pop();
			}
			st.push(arr[i]);
		}

		while(!st.empty()){
			v.push_back(st.top());
			st.pop();
		}
		int j;
		for(j=0;j<n;j++){
			if(v[j] != j+1) break;
		}
		if(j == n)
			cout<<"yes\n";
		else
			cout<<"no\n";
	}

	return 0;
}