#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	int c;
	while(1){
		cin>>c;
		if(c==0)
			return 0;

		cin>>s;
		int r;
		if(s.length()%c==0)
			r = s.length()/c;
		else
			r = (s.length()/c)+1;

		char ch[r][c];
		int count=0;
		for(int i=0;i<r;i++){
			if(i%2==0){
				for(int j=0;j<c;j++)
					ch[i][j]=s[count++];
			}
			else{
				for(int j=c-1;j>=0;j--)
					ch[i][j]=s[count++];
			}
		}
		for(int i=0;i<c;i++){
			for(int j=0;j<r;j++)
				cout<<ch[j][i];
		}
		cout<<endl; 
	}
	return 0;
}