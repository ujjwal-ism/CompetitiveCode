#include <bits/stdc++.h>
#define MAX 50005
#define MIN -1000000000
using namespace std;
typedef long ll;

struct node{
  ll ls;
  ll rs;
  ll ts;
  ll ms;
};

ll arr[MAX];
node tree[4*MAX];

void build(int ci,int s,int e){
  if(s == e){
    tree[ci] = ((node){arr[s],arr[s],arr[s],arr[s]});
    return ;
  }
  else{
    int mid = (s+e)>>1;
    build(2*ci+1,s,mid);
    build(2*ci+2,mid+1,e);
    node l = tree[2*ci+1] , r = tree[2*ci+2];
    tree[ci].ts = l.ts + r.ts;
    tree[ci].ls = max(l.ls,l.ts + r.ls);
    tree[ci].rs = max(r.rs,r.ts + l.rs);
    tree[ci].ms = max(l.ms,max(r.ms,l.rs+r.ls)); 
  }
}

node query(int ci,int s,int e,int i,int j){
  if(s > e || s >j || e < i){
    return ((node){MIN,MIN,MIN,MIN});
  }
  if(s >= i && e <= j)
    return tree[ci];
  
  int mid = (s+e)>>1;
  node l = query(2*ci+1,s,mid,i,j);
  node r = query(2*ci+2,mid+1,e,i,j);

  return ((node){max(l.ls,l.ts + r.ls),max(r.rs,r.ts + l.rs),l.ts + r.ts,max(l.ms,max(r.ms,l.rs+r.ls))});
}

int main()
{
  int n,i,j;scanf("%d",&n);
  for(int i=0;i<n;i++)
    scanf("%ld",arr+i);

  build(0,0,n-1);

  ll q;scanf("%ld",&q);
  while(q--){
    scanf("%d%d",&i,&j);
    printf("%ld\n",query(0,0,n-1,i-1,j-1).ms);
  }
  return 0;
}