#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(int argc, char const *argv[])
{
   	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);		
	int t;cin>>t;
	int count = 0;
	while(t--) {
		int x1,y1,x2,y2,x3,y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;

		int a = (y2-y1)*(y2-y1) + (x2-x1)*(x2-x1);
		int b = (y3-y2)*(y3-y2) + (x3-x2)*(x3-x2);
		int c = (y3-y1)*(y3-y1) + (x3-x1)*(x3-x1);

		if((a == b + c) || (b == a + c) || (c == a + b)) count++;
	} 

	cout<<count;

	return 0;
}