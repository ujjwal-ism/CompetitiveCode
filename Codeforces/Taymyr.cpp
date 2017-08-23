#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(int argc, char const *argv[])
{
	ll n,m,z;cin>>n>>m>>z;
	ll max = (n > m) ? n : m;

    do
    {
        if (max % n == 0 && max % m == 0)
        {
            break;
        }
        else
            ++max;
    } while (true);
    ll ans = z/max;
    cout<<ans;

	return 0;
}