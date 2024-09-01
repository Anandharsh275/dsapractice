#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>&arr,int k,int index,vector<int>eachsub,vector<vector<int>>&eachcomb,vector<vector<vector<int>>>&allcombinations){
if(!eachsub.empty()){
    eachcomb.push_back(eachsub);
}
if(k==1){
    vector<int>last;
    for(int i=index; i<arr.size() ;i++){
        last.push_back(arr[i]);
    }
    if(!last.empty()){
    eachcomb.push_back(last);
    allcombinations.push_back(eachcomb);
    eachcomb.pop_back();
    }
    return;
}
eachsub.clear();
for(int i=index; i<arr.size(); i++){
    eachsub.push_back(arr[i]);
solve(arr,k-1,index+1,eachsub,eachcomb,allcombinations);
if(!eachcomb.empty()){
    eachcomb.pop_back();
}
}

}
int main(){
    vector<int>arr={1,2,3};
    vector<vector<vector<int>>>allcombinations;
    int k=3;
    int index=0;
    vector<vector<int>>eachcomb;
    vector<int>eachsub;
    solve(arr,k,index,eachsub,eachcomb,allcombinations);
    for(int i=0; i<allcombinations.size(); i++){
        cout << "[";
        for(int j=0; j<allcombinations[i].size(); j++){
            cout << "[";
            for(int k=0; k<allcombinations[i][j].size(); k++){
                cout << allcombinations[i][j][k] ;
                if(k!=allcombinations[i][j].size()-1)
                cout << ",";
            }
            cout<<"]";
        }
    cout << "]" << endl;
    }
    return 0;
}