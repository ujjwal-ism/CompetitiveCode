#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(int argc, char const *argv[])
{
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		string s[n];

		for(int i=0;i<n;i++) cin>>s[i];

		int cost_red = 0;
		int cost_green = 0;

		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(i%2 == 0){
					// Red at the beginning
					if(j%2 == 0 && s[i][j] == 'G')
						cost_red += 3;
					else if(j%2 == 1 && s[i][j] == 'R')
						cost_red += 5;

					// Green at the beginning
					if(j%2 == 0 && s[i][j] == 'R')
						cost_green += 5;
					else if(j%2 == 1 && s[i][j] == 'G')
						cost_green += 3;
				}
				else{
					if(j%2 == 0 && s[i][j] == 'R')
						cost_red += 5;
					else if(j%2 == 1 && s[i][j] == 'G')
						cost_red += 3;

					if(j%2 == 0 && s[i][j] == 'G')
						cost_green += 3;
					else if(j%2 == 1 && s[i][j] == 'R')
						cost_green += 5;		
				}
			}
		}

		cout<<min(cost_green,cost_red)<<endl;
	}

	return 0;
}