#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

vector<int> v[1001];
int cnt = 0;

void util(bool vis[], int arr[], int n,int st) {
	v[cnt].push_back(st);
	int idx = arr[st];
	while(!vis[idx]) {
		vis[idx] = true;
		v[cnt].push_back(idx);
		idx = arr[idx];
	}
	v[cnt].push_back(idx);
}

int main(int argc, char const *argv[])
{
   	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);		
	int n;cin>>n;
	bool vis[n+1];
	int arr[n+1];
	for(int i=1;i<=n;i++) {
		cin>>arr[i];
		vis[i] = false;
	}

	for(int i=1;i<=n;i++) {
		if(vis[i] == false){
			cnt++;
			vis[i] = true;
			util(vis,arr,n,i);
		}
	}

	cout<<cnt<<endl;
	for(int i=1;i<=cnt;i++) {
		for(int j = 0;j < v[i].size(); j++)
			cout<<v[i][j]<<" ";
		cout<<endl;
	}

	return 0;
}