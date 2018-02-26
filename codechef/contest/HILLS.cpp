#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;cin>>t;
    while(t--) {
        int n,u,d;cin>>n>>u>>d;
        
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];

        bool p = true;

        int i;
        for(i = 0;i < n-1; i++) {
            if(arr[i+1] - arr[i] > u) break;
            if(arr[i] - arr[i+1] > d) {
                if(p == true)
                    p = false;
                else
                    break;
            } 
        }

        cout<<i+1<<"\n";
    }

    return 0;
}
