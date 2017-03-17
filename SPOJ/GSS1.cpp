#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int n;  // array size
ll t[50001];

void build() {  // build the tree
  for (int i = n - 1; i > 0; --i) t[i] = t[i<<1] + t[i<<1|1];
}

ll query(int l, int r) {  // sum on interval [l, r)
  ll res = 0;
  for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
    if (l&1) res += t[l++];
    if (r&1) res += t[--r];
  }
  return res;
}

int main() {
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) scanf("%lld", t + n + i);
  build();
  int m;scanf("%d",&m);
  while(m--){		
  int x,y;scanf("%d%d",&x,&y);
  if(n==1)
  	printf("%lld",t[1]);
  else{
  	ll t;
  	ll ans = query(x-1,x);
  	for(int i = x-1;i<=y;i++){
  		for(int j = i;j<=y;j++){
  			t = query(i,j);
  			if(t>ans)
  				ans = t;
  		}
  	}
  	printf("%lld",ans);
  }
}
  return 0;
}