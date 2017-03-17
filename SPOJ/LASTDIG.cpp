#include <bits/stdc++.h>

using namespace std;

int main()
{	
	int t;cin>>t;
	int a,b;
	while(t--){
		cin>>a>>b;
		if(b==0){
			cout<<"1"<<endl;
			continue;
		}
		int ch = a%10;
		int m,n;
		if(ch ==0 || ch ==1 || ch ==5 || ch==6)
			cout<<ch<<endl;
		else if(ch ==2 || ch ==8){
				m = b%4;
				if(m==0)
					cout<<"6"<<endl;
				else{
					n = pow(ch,m);
					cout<<n%10<<endl;
				}
		}
		else if(ch==3 || ch==7){
				m = b%4;
				n = pow(ch,m);
				cout<<n%10<<endl;
		}
		else if(ch==4){
				m = b%2;
				if(m==0)
					cout<<"6"<<endl;
				else{
					n = pow(ch,m);
					cout<<n%10<<endl;
				}
		}
		else {
				m = b%2;
				n = pow(ch,m);
				cout<<n%10<<endl;
		}
	}	
	
	return 0;
}
