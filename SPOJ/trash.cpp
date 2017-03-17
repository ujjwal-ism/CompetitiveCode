#include <bits/stdc++.h>
using namespace std;

int constructSTUtil(int arr[], int ss, int se, int *st, int si)
{
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }
    int mid = ss + (se - ss)/2;
    st[si] =  constructSTUtil(arr, ss, mid, st, si*2+1) +
              constructSTUtil(arr, mid+1, se, st, si*2+2);
    return st[si];
}

int *constructST(int arr[], int n)
{

    int x = (int)(ceil(log2(n))); 
 
    int max_size = 2*(int)pow(2, x) - 1; 

    int *st = new int[max_size];

    constructSTUtil(arr, 0, n-1, st, 0);
 
    return st;
}

int getSumUtil(int *st, int ss, int se, int qs, int qe, int si)
{
    if (qs <= ss && qe >= se)
        return st[si];
 
    if (se < qs || ss > qe)
        return 0;
 
    int mid = ss + (se - ss)/2;
    return getSumUtil(st, ss, mid, qs, qe, 2*si+1) +
           getSumUtil(st, mid+1, se, qs, qe, 2*si+2);
}

int getSum(int *st, int n, int qs, int qe)
{
    return getSumUtil(st, 0, n-1, qs, qe, 0);
}

int main(int argc, char const *argv[])
{
	int n;scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	int *st = constructST(arr, n);
	
	int m;scanf("%d",&m);
	int x,y;
	int max,t;
	for(int i=0;i<m;i++){
		scanf("%d%d",&x,&y);
		max = -99999;
		for(int i=x;i<=y;i++){
			for(int j=i;j<=y;j++){
				t = getSum(st,n,i,j);
				if(t>max)
					max = t;
			}
		}
		printf("%d\n",max );
	}

	return 0;
}