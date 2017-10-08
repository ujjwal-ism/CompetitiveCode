#include <bits/stdc++.h>
#define mod 1000000007

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;

struct query{
	int idx;
	int l;int r;
}q[200001];

int arr[30001];
int cnt[1000005] = {0};
int ans[200006];
int n;
int block;
int sol = 0;

bool cmp(query a,query b){
	if(a.l/block != b.l/block)
		return a.l/block < b.l/block;
	return a.r < b.r;
}

int main()
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	cin>>n;
	block = sqrt(n);

	for(int i=0;i<n;i++) cin>>arr[i];

	int t;cin>>t;
	for(int i=0;i<t;i++){
		cin>>q[i].l>>q[i].r;
		q[i].idx = i;
		q[i].l--;
		q[i].r--;
	}

	sort(q,q+t,cmp);

	int cl = 0 , cr = 0;
	for(int i=0;i<t;i++){
		int left = q[i].l;
		int right = q[i].r;

		while(cl < left){
			cnt[arr[cl]]--;
			if(cnt[arr[cl]] == 0) sol--;			
			cl++;
		}

		while(cl > left){
			cnt[arr[cl-1]]++;
			if(cnt[arr[cl-1]] == 1) sol++;
			cl--;
		}

		while(cr <= right){
			cnt[arr[cr]]++;
			if(cnt[arr[cr]] == 1) sol++;
			cr++;
		}

		while(cr > right+1){
			cnt[arr[cr-1]]--;
			if(cnt[arr[cr-1]] == 0) sol--;
			cr--;
		}
		ans[q[i].idx] = sol;
	}

	for(int i=0;i<t;i++)
		cout<<ans[i]<<"\n";

	return 0;
}