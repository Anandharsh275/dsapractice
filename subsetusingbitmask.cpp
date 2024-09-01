#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>allsubsets(vector<int>&nums){
    int n=nums.size();
    int subset_cnt=(1<<n);
    vector<vector<int>>subsets;
    for(int mask=0; mask<subset_cnt; mask++){
        vector<int>subset;
        for(int i=0 ;i<n; i++){
            if(mask&(1<<i))
            subset.push_back(nums[i]);
        }
        subsets.push_back(subset);
    }
    return subsets;
}
int main(){
int n;
cin >> n;
vector<int>arr(n);
for(int i=0 ;i<n; i++)cin >> arr[i];
auto all=allsubsets(arr);
for(auto m:all){
    for(int al:m){
cout << al << " ";
    }
    cout << endl;
}
return 0;
}