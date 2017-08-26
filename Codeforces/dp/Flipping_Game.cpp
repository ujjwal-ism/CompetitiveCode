#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int n,t;cin>>n;
	int one = 0 , curr = 0, add = -1;
	for(int i=0;i<n;i++){
		cin>>t;
		if(t == 1){
			one++;
			if(curr > 0){
				curr--;
			}
		}
		else{
			curr++;
			add = max(add,curr);
		}
	} 
	cout<<one+add;

	return 0;
}