#include <bits/stdc++.h>
#define MAX 1000000
using namespace std;
typedef unsigned long long ll;

ll Tree[MAX];
ll lazy[MAX];
void update(int si,int ss,int se,int us,int ue,ll diff){
	if(lazy[si] != 0){
		Tree[si] += (ll)(se-ss+1)*lazy[si];

		if(ss!=se){
			lazy[si*2]   += lazy[si]; // c
            lazy[si*2 + 1]   += lazy[si];// c
		}
		lazy[si] = 0;
	}
	if (ss>se || ss>ue || se<us)
        return ;

    if(ss >= us && se <= ue){
    	Tree[si] += (ll)(se-ss+1)*diff;
    	if(ss!=se){
			lazy[si*2]   += diff; // c
            lazy[si*2+1]   += diff;// c
    	}
    	return;
    }
    int mid = ss + (se-ss)/2;
    update(si*2, ss, mid, us, ue, diff);//c
    update(si*2+1,mid+1, se, us, ue, diff);//c

    Tree[si] = Tree[si*2] + Tree[si*2+1];//c
}

ll getSum(int ss,int se,int qs,int qe,int si){
	if(lazy[si] != 0){
		Tree[si] += (ll)(se-ss+1)*lazy[si];

		if(ss!=se){
			lazy[si*2]  += lazy[si]; // c
            lazy[si*2 + 1]  += lazy[si];// c
		}
		lazy[si] = 0;
	}
	if(ss > se || ss>qe || se<qs)
		return 0;

	if(ss >= qs && se <= qe)
		return Tree[si];

	int mid = ss + (se - ss)/2;
	return getSum(ss, mid, qs, qe, si*2) + getSum(mid+1, se, qs, qe, si*2+1);//c
}

int main(int argc, char const *argv[]) {
	std::ios::sync_with_stdio(false);cin.tie(NULL);

	int temp;cin>>temp;
	while(temp--){

		int n; cin>>n;
		int t = ceil(log2(n));
		t = 2*pow(2,t);

		for(int i=0;i<t;i++){
			Tree[i] = 0;
			lazy[i] = 0;
		}

		int c;cin>>c;
		while(c--){
			int a;cin>>a;
			int p,q;cin>>p>>q;
			if(a == 0){
				ll v;cin>>v;
				update(1,1,n,p,q,v);
			}
			else{
				cout<<getSum(1,n,p,q,1)<<endl;
			}
		}
	}
	return 0;
}