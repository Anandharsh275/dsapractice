#include<bits/stdc++.h>
using namespace std;
void helper(int k){
    vector<int>ar;
    for(int i=1; i<=k; i++){
        ar.push_back(i);
    }
    cout << *(ar.end()-1) << endl;
    string arr="harsh";

    do{
        for(char k:arr){
            cout << k << "";
        }
        cout << "\n";
    }
        while
      (next_permutation(arr.begin(),arr.end()));
}
int main(){
    helper(3);
}