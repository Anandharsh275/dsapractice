#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pp pop_back
int n=3;
vector<vector<int>>ans;
void helper(int k,vector<int>arr){
    if(k==n+1){
        // cout << "yes" << endl;
        ans.push_back(arr);
        // arr.clear();
        return;
    }
    else{
        arr.pb(k);
       
        helper(k+1,arr);
        arr.pp();
        helper(k+1,arr);
    }
}
int main(){
vector<int>arr;
helper(1,arr);
cout << ans.size() << "\n";
for(int i=0; i<ans.size(); i++){
    for(int j=0; j<ans[i].size(); j++){
        cout << ans[i][j] << " ";
    }
    cout << "\n";
}
}