#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#define ln "\n"
#define all(v) v.begin(),v.end()
#define rt(s) return cout<<s,0
#define sz(s)	(int)(s.size())
#define OO 0x3f3f3f3f3f3f3f3fLL
#define oo 0x3f3f3f3f
using namespace std;
typedef long long ll;
int dx[] { -1, 0, 0, 1, 1, 1, -1, -1 };
int dy[] { 0, -1, 1, 0, 1, -1, 1, -1 };
 
 
string lower(string s){
    for(auto &x : s) x = tolower(x);
    return s;
}
int main() {
    int t; cin>>t;
    while(t--){
        
    int n; cin>>n;
    vector<string>v(n);
    vector<int>del(n);
    
    for(int i = 0 ; i  < n ; i++) cin>>v[i];
    int cnt = 0;
    for(int i = 0 ; i < n ; i++){
        if(del[i]) continue;
        cnt++;
        for(int j = i+1 ; j < n ; j++){
            if(lower(v[i]) == lower(v[j])) del[j] = 1;
        }
    }
    cout<<cnt<<"\n";
    for(int i = 0 ; i < n ;i++){
        if(!del[i]) cout<<v[i]<<" ";
    }
    cout<<"\n";
        
    }
    return 0;
}
