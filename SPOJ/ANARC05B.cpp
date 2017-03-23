#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);
	int n,m,t;
	while(cin>>n && n){
		int a[n];long long da[n];cin>>a[0];
		da[0] = a[0];
		for(int i=1;i<n;i++){
			cin>>a[i];
			da[i] = da[i-1]+a[i];
		}
		cin>>m;

		int b[m];long long db[m];cin>>b[0];
		db[0] = b[0];
		for(int i=1;i<m;i++){
			cin>>b[i];
			db[i] = db[i-1]+b[i];
		}

		std::vector<pair<int,int> > v;t = 0;
		for(int i=0;i<n;i++){
			for(int j=t;j<m;j++){
				if(b[j] == a[i]){
					t = j+1;
					v.push_back(make_pair(i,j));break;
				}
				else if(b[j]>a[i])
					break;
			}
		}
		long long sum;
		int l = v.size();
		if(v.empty())
			cout<<max(da[n-1],db[m-1])<<endl;
		else{
			sum = max(da[v[0].first],db[v[0].second]);
			for(int i=1;i<l;i++){
				if(da[v[i].first]-da[v[i-1].first] > db[v[i].second]-db[v[i-1].second])
					sum += da[v[i].first]-da[v[i-1].first];
				else
					sum += db[v[i].second]-db[v[i-1].second];
			}
			sum += max(da[n-1]-da[v[l-1].first],db[m-1]-db[v[l-1].second]);
			cout<<sum<<endl;
		}
	}

	return 0;
}