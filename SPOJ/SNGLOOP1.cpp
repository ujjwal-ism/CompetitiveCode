#include <bits/stdc++.h>

using namespace std;
typedef long ll;

int main(){
    int t;scanf("%d",&t);
    ll n,m;
    while(t--){
        scanf("%ld%ld",&n,&m);
        if((m-n)%4==1)
            printf("3\n");
        else if((m-n)%4==2)
            printf("9\n");
        else if((m-n)%4==3)
            printf("7\n");
        else
            printf("1\n");
    }
    return 0;
}
