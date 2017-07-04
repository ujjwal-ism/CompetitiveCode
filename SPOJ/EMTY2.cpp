#include <bits/stdc++.h>
#define MAX 120001
using namespace std;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t,l;cin>>t;
	string s;
	for(int i=1;i<=t;i++){
		cin>>s;
		l = s.length();
		int k=0;
		int arr[MAX];

		for(int j=l-1;j>=0;j--){
			if(s[j]-'0' == 0){
				arr[k++] = 0;
			}
			else{
				if((k-2)>=0 && arr[k-1] == 0 && arr[k-2] == 0){
					k = k-2;
				}
				else{
					arr[k++] = 1;
				}
			}
		}
		if(k==0)
			cout<<"Case "<<i<<": yes\n";
		else
			cout<<"Case "<<i<<": no\n";
	}	
	return 0;
}