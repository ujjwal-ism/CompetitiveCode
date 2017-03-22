#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,h,a,ti;cin>>t;
	while(t--){
		cin>>h>>a;
		ti = 1;
		while(1){
			if(h<=0 || a<=0)
				break;
			if(ti%2==1){
				h+=3;a+=2;
			}
			else if(h>20&&a<=10){
				h-=20;a+=5;
			}
			else if(h>5&&a>10){
				h-=5;a-=10;
			}
			else{
				cout<<ti-1<<endl;
				break;
			}
			ti++;
		}
	}

	return 0;
}