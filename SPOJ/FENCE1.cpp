#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	float t,a,pi=3.14159265;
	while(1){
		cin>>t;
		if(t==0.0)
			return 0;
		a = t*t/(2*pi);
		printf("%.2f\n",a);

	}
	return 0;
}