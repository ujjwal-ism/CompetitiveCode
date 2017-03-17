#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int a1,a2,a3;
	while(1){
		cin>>a1>>a2>>a3;
		if(a1==0 && a2==0 && a3==0)
			return 0;
		if((a2-a1)==(a3-a2))
			cout<<"AP "<<a1+3*(a2-a1)<<endl;
		else
			cout<<"GP "<<a1*(a2/a1)*(a2/a1)*(a2/a1)<<endl;
	}
	return 0;
}