#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;

bool prime[10005];
void sieve(){
	memset(prime,true,sizeof(prime));
	for(int i=2;i*i<10004;i++){
		if(prime[i]){
			for(int j=2*i;j<10004;j+=i)
				prime[j] = false;
		}
	}
}

void num_array(int num[],int n){
	int x = 3;
	while(n){
		num[x--] = n%10;
		n /= 10;
	}
}

int number(int num[]){
	int ans = 0,i = 0;
	while(i<4){
		ans = 10*ans + num[i];
		i++;
	}
	return ans;
}

int main()
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int t,a,b;cin>>t;
	int dist[10004],num[4];
	
	sieve();
	while(t--){
		cin>>a>>b;
		memset(dist,-1,sizeof(dist));
		queue<int> q;
		q.push(a);
		dist[a] = 0;

		while(!q.empty()){
			int n = q.front();
			q.pop();

			for(int i=0;i<4;i++){
				num_array(num,n);
				for(int j=0;j<10;j++){
					num[i] = j;
					int temp = number(num);

					if(prime[temp] && dist[temp] == -1 && temp > 1000){
						dist[temp] = dist[n] + 1;
						q.push(temp);
					}
				}				
			}
		}
		if(dist[b] == -1)
			cout<<"Impossible\n";
		else
			cout<<dist[b]<<"\n";
	}

	return 0;
}