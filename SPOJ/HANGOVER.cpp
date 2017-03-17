#include <bits/stdc++.h>

using namespace std;

int cards(float a){
	float t=0.00;
	int i=1;
	while(1){
		t += (float)1/(i+1);
		if(t>=a)
			return i;
		i++; 
	}
}

int main(int argc, char const *argv[])
{
	float n;
	while(1){
		cin>>n;
		if(n==0.00)
			return 0;
		cout<<cards(n)<<" "<<"card(s)"<<endl;
	}

	return 0;
}