#include<bits/stdc++.h>
using namespace std;
const int N=2e5+20;
bool dp[N];
int n;
vector<int>arr[N];
int check(string first,string second){
    int count=0;
    for(int i=0 ;i<first.size() ;i++){
        if(first[i]!=second[i])count++;
    }
    return count;
}
int main(){
for(int i=1; i<N; i++){
    for(int j=i; j<N; j+=i){
        arr[j].push_back(i);//we are doing this to calculate the possible devisor of each length
    }
}
int t;
cin >> t;
while(t--){
    int n; 
    cin >> n;
    string s;
    cin >> s;
    for(int x:arr[n]){
        string first=s.substr(0,x);
        string temp="";
        for(int i=0 ;i<n/x; i++)temp+=first;
        if(check(s,temp)<=1){
            cout << x << "\n";
        break;
        }
    first=s.substr(x,x);
    temp="";
    for(int i=0 ;i<n/x; i++)temp+=first;
    if(check(s,temp)<=1){
        cout << x << "\n";
        break;
    }
    }
}
}