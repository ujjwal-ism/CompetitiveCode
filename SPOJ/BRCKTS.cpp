#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
#define MAX 30006
using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;

struct node {
	int unmatched_open;
	int unmatched_close;
};
node tree[4*MAX];
char arr[MAX];

void build(int ci,int s,int e){
	if(s == e){
		if(arr[s] == '('){
			tree[ci].unmatched_open = 1;
			tree[ci].unmatched_close = 0;
		}
		else{
			tree[ci].unmatched_open = 0;
			tree[ci].unmatched_close = 1;
		}
	}
	else{
		int mid = (s+e)>>1;
		build(2*ci+1,s,mid);
		build(2*ci+2,mid+1,e);

		int temp = min(tree[2*ci+1].unmatched_open , tree[2*ci+2].unmatched_close);
		tree[ci].unmatched_open = tree[2*ci+1].unmatched_open + tree[2*ci+2].unmatched_open - temp;
		tree[ci].unmatched_close = tree[2*ci+1].unmatched_close + tree[2*ci+2].unmatched_close - temp;
	}
}

void update(int ci,int s,int e,int x,char val){
	if(s == e && s == x ){
		if(val == '('){
			tree[ci].unmatched_open = 1;
			tree[ci].unmatched_close = 0;
		}
		else{
			tree[ci].unmatched_open = 0;
			tree[ci].unmatched_close = 1;
		}		
	}
	else{
		int mid = (s+e)>>1;
		if(x <= mid)
			update(2*ci+1,s,mid,x,val);
		else
			update(2*ci+2,mid+1,e,x,val);

		int temp = min(tree[2*ci+1].unmatched_open,tree[2*ci+2].unmatched_close);
		tree[ci].unmatched_open = tree[2*ci+1].unmatched_open + tree[2*ci+2].unmatched_open - temp;
		tree[ci].unmatched_close = tree[2*ci+1].unmatched_close + tree[2*ci+2].unmatched_close - temp;	
	}
}

int main(int argc, char const *argv[])
{
	//std::ios::sync_with_stdio(false);cin.tie(NULL);
	for(int t = 1;t <=10; t++){
		int n;scanf("%d",&n);
		scanf("%s",arr);

		build(0,0,n-1);

		printf("Test %d:\n",t );
		int m;scanf("%d",&m);
		
		for(int i=0;i<m;i++){
			int temp; scanf("%d",&temp);
			if(temp){
				arr[temp-1] = (arr[temp-1] == '(') ? ')' : '(';
				update(0,0,n-1,temp-1,arr[temp-1]);
			}
			else{
				if(tree[0].unmatched_close == 0 && tree[0].unmatched_open == 0)
					printf("YES\n");
				else
					printf("NO\n");
			}
		}
	}

	return 0;
}