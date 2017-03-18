#include <bits/stdc++.h>
 
using namespace std;
 
int editDistance(string X,string Y){
    int n = X.length();
    int m = Y.length();
    int D[n+2][m+2];// Size to be noted.
    
    int C='z'+1;
    int da[C];
               
    for(int d=0;d<C;d++)
        da[d]=0;
    
    int maxdist = n+m;
    D[0][0] = maxdist;

    for(int i=0;i<=n;i++){
         D[i+1][1] = i; D[i+1][0] = maxdist; }

    for(int j=1;j<=m+1;j++){
         D[1][j+1] = j; D[0][j+1] = maxdist; }
    
    int db,k,l,cost;

    for(int i=1;i<=n;i++){
        db = 0;
        for(int j=1;j<=m;j++){
            k = da[Y[j-1]];
            l = db;
            if(X[i-1] == Y[j-1]){
                cost = 0;db = j;
            }
            else
                cost = 1;

            D[i+1][j+1] = min(D[i][j]+cost,min(D[i+1][j]+1,min(D[i][j+1]+1,D[k][l]+(i-k-1)+1+(j-l-1))));
        }
        da[X[i-1]] = i;
    }
     return D[n+1][m+1];
}

int main(int argc, char const *argv[])
{
    string s,t;
    while(1){
        cin>>s>>t;
        if(s == "*" && t == "*")
            break;
        printf("%d\n",editDistance(s,t));
    }
     return 0;
}