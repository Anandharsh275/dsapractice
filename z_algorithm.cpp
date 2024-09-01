#include<bits/stdc++.h>
using namespace std;
#define ll long long
auto z_algo(string s){
    ll length=s.length();
    int left=0,right=0;
    vector<ll>z(length);
    for(ll i=1;i<length; i++){
        if(i>right){
            left=right=i;
            while(right<length and s[right]==s[right-left])
            right++;
        z[i]=right-left;
        right--;
        }
else{
    ll idx=i-left;
    if(i+z[idx]<=right)z[i]=z[idx];
    else {
        left=i;
        while(right<length and s[right]==s[right-left])right++;
        z[i]=right-left;
        right--;
    }
}
    }
    return z;
} 
int main(){
    string s;
    cin >> s ;
    auto ans=z_algo(s);
    for(auto i:ans){
        cout << i << " ";
    }
}