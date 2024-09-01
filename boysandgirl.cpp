#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
void helper(){
 long long n,k;
 cin >> n >> k;
 vector<int>arr(n);
 for(int i=0; i<n; i++)cin >> arr[i];
 for(int i=0; i<k; i++){
  if(arr[0]==0){
    arr.erase(arr.begin());
    continue;
  }
  arr[0]--;
  if(arr[0]==0){
    arr.erase(arr.begin());
  }
  if(arr.size()==1){
    break;
  }
  arr[arr.size()-1]--;
  if(arr[arr.size()-1]==0){
    arr.pop_back();
  }
 }
 cout << arr.size() << endl;
}
int main(){
  int t;
  cin >> t;
  while(t--){
   helper();
  }
   return 0;
}