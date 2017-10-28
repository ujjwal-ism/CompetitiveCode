#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;scanf("%d",&t);
    for(int a = 1;a <= t; a++){
        int n;scanf("%d",&n);
        char s[82];scanf("%s",s);
        
        int i=n;
        for(;s[i] != '\0';i++)
            s[i-1] = s[i];
        s[i-1] = '\0';
        printf("%d %s\n",a,s);
    }

    return 0;
}
