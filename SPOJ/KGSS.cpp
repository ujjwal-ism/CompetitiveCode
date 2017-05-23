#include <bits/stdc++.h>
#define MAX 100001
using namespace std;
typedef long long ll;

struct node{
	ll sm;
	ll m;
};

ll arr[MAX];
node Tree[4*MAX];

void build(int ci,int st,int e){
	if(st==e){
		Tree[ci] = ((node){arr[st],arr[st]});
		return;
	}
	else{
	int mid = (st+e)/2;
	build(2*ci+1,st,mid);
	build(2*ci+2,mid+1,e);

	node l = Tree[2*ci+1] , r = Tree[2*ci + 2];
	Tree[ci].sm = max(l.sm,max(r.sm,l.m + r.m));
	Tree[ci].m = max(l.m , r.m);
	}
}

void update(int ci,int st,int e,int p,int val){
	if(st==e && st==p){
		Tree[ci] = ((node){val,val});
		return;
	}
	int mid = (st+e)/2;
	if(p <= mid){
		update(2*ci+1,st,mid,p,val);
	}
	if(p > mid){
		update(2*ci+2,mid+1,e,p,val);
	}
	node l = Tree[2*ci+1] , r = Tree[2*ci + 2];
	Tree[ci].sm = max(l.sm,max(r.sm,l.m + r.m));
	Tree[ci].m = max(l.m , r.m);
}

node sum(int ci,int st,int e,int i,int j){
	if(st > e || st > j || e < i){
		return ((node){0,0});
	}
	if(st>=i && e <= j){
		return Tree[ci];
	}
	int mid = (st+e)/2;
	node l = sum(2*ci+1,st,mid,i,j);
	node r = sum(2*ci+2,mid+1,e,i,j);

	return ((node){max(l.sm,max(r.sm,l.m + r.m)),max(l.m , r.m)});
}

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);

	int n;cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	
	build(0,0,n-1);
	
	int t;cin>>t;
	char c;
	int a,b;
	while(t--){
		cin>>c>>a>>b;
		if(c == 'U'){
			update(0,0,n-1,a-1,b);
		}
		else{
			cout<<sum(0,0,n-1,a-1,b-1).sm<<"\n";
		}
	}	

	return 0;
}