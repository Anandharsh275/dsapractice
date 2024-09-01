#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
//I want to calculate diameter also then one naive approach would be simply go to each node and calculate max depth and finally find maximum one which will take roughly of time complexity of o(n^2);
int subtree_sum[N];//it is going to compute the subtree sum 
int counteven[N];// it is going to compute the no. of even nodes;
vector<int>arr[N];
int depth[N],height[N];
int paren[N];
int subtree_Node[N];
int dfs(int current,int parent){
paren[current]=parent;
subtree_sum[current]+=current;
subtree_Node[current]++;;
if(current%2==0)counteven[current]++;
    for(auto child:arr[current]){
        if(child==parent)continue;
          depth[child]=depth[current]+1;
        dfs(child,current);
        // cout << "brother first is" << current << endl;
        subtree_sum[current]+=subtree_sum[child];
        counteven[current]+=counteven[child];
        subtree_Node[current]+=subtree_Node[child];
        height[current]=max(height[current],height[child]+1);
    }
}
vector<int> pathp(int node){
    vector<int>ans;
    while(node!=0){
        ans.push_back(paren[node]);
        node=paren[node];
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
int n;
cin >> n;
for(int i=0 ;i<n-1; i++)//since having n-1 edge
{
int x,y;
cin >> x >> y;
arr[x].push_back(y);
arr[y].push_back(x);
}
 vector<int>cl(n);
    for(int i=0; i<n ;i++)cin >> cl[i];
dfs(1,0);
for(int i=1; i<=n; i++){
    cout << depth[i]<<" " << height[i] << endl;
}

// int maxdepth=-1;
// int nodemax=-1;
// for(int i=1; i<=n; i++){
// if(maxdepth<depth[i]){
// maxdepth=depth[i];
// nodemax=i;
// }
// depth[i]=0;
// //cause i have to run again a loop so that i can find depth from one end of maxdepth that calculated before
// }
// dfs(nodemax,-1);
// for(int i=1; i<=n; i++){
//     if(maxdepth<depth[i]){
//         maxdepth=depth[i];
//     }
// }
// cout << maxdepth << endl;

// int ans=-1;
// vector<int>first=pathp(7);
// vector<int>second=pathp(8);
// int minilen=min(first.size(),second.size());
// for(int i=0;i <minilen; i++){
//     if(first[i]==second[i]){
//         ans=first[i];
//     }else break;
// }
}