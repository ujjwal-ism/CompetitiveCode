#include <bits/stdc++.h>
#define MAX 100005
#define endl '\n'

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int tree[4*MAX];
int lazy[4*MAX];

int queryLazy(int node,int start,int end,int l,int r){
	if(end < l || start > r) return 0;
	if(lazy[node] == 1){
		tree[node] = (end - start + 1) - tree[node];
		if(start != end){
			lazy[(node<<1)+1] = 1 - lazy[(node<<1)+1];
			lazy[(node<<1)+2] = 1 - lazy[(node<<1)+2];
		}
		lazy[node] = 0;
	}
	if(start >= l && end <= r) return tree[node];

	int left = queryLazy((node<<1)+1, start, (start+end)>>1, l, r );
	int right = queryLazy((node<<1)+2, ((start+end)>>1)+1, end, l, r);

	return left+right; 
}

void updateLazy(int node,int start,int end,int l,int r){
	if(lazy[node] == 1){
		tree[node] = (end - start + 1) - tree[node];
		if(start != end){
			lazy[(node<<1)+1] = 1 - lazy[(node<<1)+1];
			lazy[(node<<1)+2] = 1 - lazy[(node<<1)+2];
		}
		lazy[node] = 0;	
	}

	if(end < l || start > r) return;

	if(start >=l && end <= r){
		tree[node] = (end - start + 1) - tree[node];
		if(start != end){
			lazy[(node<<1)+1] = 1 - lazy[(node<<1)+1];
			lazy[(node<<1)+2] = 1 - lazy[(node<<1)+2];	
		}
		return;
	}
	updateLazy((node<<1)+1,start, (start+end)>>1, l, r);
	updateLazy((node<<1)+2,((start+end)>>1)+1, end, l, r);

	tree[node] = tree[(node<<1)+1] + tree[(node<<1)+2];
}

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	memset(tree,0,sizeof(tree));
	memset(lazy,0,sizeof(lazy));

	int n,q;cin>>n>>q;
	
	while(q--){
		int a,l,r;
		cin>>a>>l>>r;
		
		if(a == 1){
			cout<<queryLazy(0,0,n-1,l,r)<<endl;
		}
		else{
			updateLazy(0,0,n-1,l,r);
		}
	} 

	return 0;
}