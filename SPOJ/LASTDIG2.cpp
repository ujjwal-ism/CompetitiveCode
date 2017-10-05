#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int llu;
int power(int x, llu y, int p)
{
    int res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;  
    }
    return res;
}
int main()
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int  t;cin>>t;string a;llu b;
	while(t--){
		cin>>a>>b;
		int x = a[a.length()-1] - '0';
		cout<<power(x,b,10)<<"\n";
	}

	return 0;
}