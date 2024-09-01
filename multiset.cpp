#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<int>arr(n);
    multiset<int>st;
    for(int i=0 ; i<n; i++){
        cin >> arr[i];
        st.insert(arr[i]);
    }
    for(int i=0 ;i<m ;i++){
        int d;
        cin >> d;
        auto it=st.upper_bound(d);
        if(it==st.begin())cout << -1 << endl;
        else {
            cout << *--it << endl;
            st.erase(it);
        }
        return 0;
    }
}