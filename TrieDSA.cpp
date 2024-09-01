#include<bits/stdc++.h>
#include<iostream>
#define mod 1000000007
using namespace std;
typedef long long lli;
int slen,sindex;
struct TrieNode{
    struct TrieNode* child[26];
    bool isEnd;
    TrieNode(){
        slen=INT_MAX;
        sindex=INT_MAX;
        isEnd=false;
        for(int i=0;i<26;i++){
            child[i]=NULL;
        }
    }
};
TrieNode *root;
bool searchString(string str){
    TrieNode *curr=root;
    lli n=str.length();
    for(lli i=0; i<n; i++){
        int idx=str[i]-'a';
        if(curr->child[idx]==NULL){
            return false;
        }
        curr=curr->child[idx];
    }
    return  curr->isEnd;
}
void insertString(string str){
    TrieNode *curr=root;
    lli n=str.length();
    for(lli i=0; i<n; i++){
           int idx=str[i]-'a';
        if(curr->child[idx]==NULL){
            curr->child[idx]=new TrieNode();
        }
        curr = curr -> child[idx];
    }
    curr ->isEnd=true;
}
void solve(){
    //  string str;
    // cin>>str;
 cout << "insert" << endl;
    lli n;
    cin>>n;
    root = new TrieNode();
    for(lli i=0;i<n;i++){
        string st;
        cin>>st;
        insertString(st);
    }
    cout<< searchString("ab") << endl;
    // int d;
    // cin >> d;
//  for(int i=0; i<d ;i++){
//     string k;
//     cin >> k;
//     cout << searchString(k)  << endl;
//  }
    // lli len = str.le"ngth();
    // vector<int> dp(len+1);
    // dp[len]=1;
    //   for(lli i=len-1;i>=0;i--){
    //     TrieNode *test = root;
    //     for(lli j=i;j<len;j++){
    //         lli idx = str[j] - 'a';
    //         if(test->child[idx] == NULL){
    //             break;
    //         }
    //         test = test->child[idx];
    //         if(test->isEnd){
    //             dp[i] = dp[i]%mod + dp[j+1]%mod;
    //             dp[i] = dp[i]%mod;
    //         }
    //     }
    // }
    // cout<<dp[1]<<endl;
}
int main(){
solve();
return 0;
}