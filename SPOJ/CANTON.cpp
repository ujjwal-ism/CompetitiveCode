#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;cin>>t;
	int q,a;
	while(t--){
		cin>>q;
		int tt = sqrt(1+8*q);
		if(tt*tt==(1+8*q)){
			a = (tt-1)/2;
			if(a%2==0){
				cout<<"TERM"<<" "<<q<<" IS "<<a<<"/1"<<endl;
			}
			else{
				cout<<"TERM "<<q<<" IS "<<"1/"<<a<<endl;
			}
		}
		else{
			a = (tt-1)/2;
			tt = (a*(a+1))/2;
			int m = q-tt;
			if(a%2==0){
				cout<<"TERM"<<" "<<q<<" IS "<<a-m+2<<"/"<<m<<endl;
			}
			else{
				cout<<"TERM"<<" "<<q<<" IS "<<m<<"/"<<a-m+2<<endl;
			}
		}
	}
	return 0;
}