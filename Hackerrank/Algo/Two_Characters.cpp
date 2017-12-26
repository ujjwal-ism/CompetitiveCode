#include <bits/stdc++.h>

using namespace std;

bool isMagicstring(string s,int n){
    for(int i=1;i<n;i++)
        if(s[i] == s[i-1])
            return false;
    return true;
}

int maxLen(string s,int n){
    map<char,bool> m;
    vector<char> v;
    
    for(int i=0;i<n;i++){
        if(!m[s[i]]){
            v.push_back(s[i]);
            m[s[i]] = true;
        }
    }
    
    int l = v.size();
    if(l == 1) return 0;
    
    int sol = 0;
    
    for(int i=0;i<l;i++){
        for(int j=i+1;j<l;j++){
            char a = v[i] , b = v[j];
            string temp = "";
            for(int k=0;k<n;k++){
                if(s[k] == a || s[k] == b)
                    temp += s[k];
            }
            
            int len = temp.length();
            if(isMagicstring(temp,len)){
                sol = max(sol,len);
            }
        }
    }
    
    return sol;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int result = maxLen(s,n);
    cout << result << endl;
    return 0;
}