#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,l;cin>>t;
	string s,temp;
	while(t--){
		cin>>s;
		l = s.length();
		int n=0;
		for(int i=0;i<l;i++){
			if(s[i]-'0'!=9)
				break;
			n++;
		}
		if(n==l){
			cout<<"1";
			for(int i=1;i<=n-1;i++)
				cout<<"0";
			cout<<"1"<<endl;
		}
		else{
			temp = s;
			reverse(temp.begin(),temp.end());
			if(s.compare(temp)==0){
				if(l%2==0){
					int q=0;
					for(int i=l/2-1;i>=0;i--){
						if(s[i]-'0'!='9')
							break;
						q++;
					}
					if(q==0){
						s[l/2-1]=s[l/2-1]-'0'+1;
						s[l/2]=s[l/2]-'0'+1;
						cout<<s<<endl;
					}
					else{
						for(int i=0;i<q;i++){
							s[l/2-1-i]='0';
							s[l/2+i]='0';
						}
						s[l/2-1-q] = s[l/2-1-q]-'0'+1;
						s[l/2+q] = s[l/2+q]-'0'+1;
						cout<<s<<endl;
					}
				}
				else{
					int q=0;
					for(int i=l/2;i>=0;i--){
						if(s[i]-'0'!='9')
							break;
						q++;
					}
					if(q==0){
						s[l/2]=s[l/2]-'0'+1;
						cout<<s<<endl;
					}
					else{
						s[l/2]='0';
						for(int i=1;i<=q-1;i++){
							s[l/2-i] = s[l/2-i]-'0'+1;
							s[l/2+i] = s[l/2+i]-'0'+1;
						}
						s[l/2-q] = s[l/2-q]-'0'+1;
						s[l/2+q] = s[l/2+q]-'0'+1;
						cout<<s<<endl;
					}
				}
			}
			else{
				if(l%2==0){
					int q=0;
					for(int i=l/2-1;i>=0;i--){
						if(s[i]-'0'!='9')
							break;
						q++;
					}
					if(q==0){
						if(s[l/2-1]-'0'>s[l/2]-'0'){
							s[l/2]=s[l/2-1];
						}
						else{
							s[l/2-1] = s[l/2-1]-'0'+1;
							s[l/2] = s[l/2-1];
						}
						int j=l-1;
						for(int i=0;i<l/2-1;i++){
							s[j]=s[i];
							j--;
						}
						cout<<s<<endl;
					}
					else{
						
					}
				}
				else{}
			}
		}

	}

	return 0;
}