#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int t;cin>>t;
	for(int i=0;i<t;i++){
		int row[8] , col[8];
		for(int i=0;i<8;i++){
			row[i] = 0 , col[i] = 0;
		}
		
		string s[8];
		for(int i=0;i<8;i++)
			cin>>s[i];

		int flag = 0;
		int rook = 0;
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				if(s[i][j] == 'R'){
					rook++;
					if(row[i] || col[j]){flag = 1;break;}
					row[i] = 1;
					col[j] = 1;
				}
			}
			if(flag) break;
		}
		if(flag)
			cout<<"NO\n";
		else{
			(rook == 8)?cout<<"YES\n":cout<<"NO\n";
		}

	}

	return 0;
}