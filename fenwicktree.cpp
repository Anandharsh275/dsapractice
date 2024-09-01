#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>bit;
void update(int id,int val){
    while(id<=n){
        bit[id]+=val;
        id+=(id&-id);
    }
}
int query(int id){
    int ans=0;
    while(id>0){
        ans+=bit[id];
        id-=(id&-id);//after removing the rightmost set bit
    }
    return ans;
}
int main(){
    //see dude always use fenwick tree only when you have to modify the nums array otherwise use prefix array only it is much efficient in ranges sum only problem
    cin >> n;
    bit =vector<int>(n+1,0);
    vector<int>a(n+1);
    for(int i=1; i<=n; i++){
        cin >> a[i];
        update(i,a[i]);
    }
    int q;
    cin >> q;
    while(q--){
        int typeofQuery;
        cin >> typeofQuery;
        if(typeofQuery==1){
            int L,R ; cin >> L >> R;
            int ans=query(R)-query(L-1);
            cout << ans << endl;
        }else{
            int id,val;
            cin >> id >> val;
            update(id,val-a[id]);
            a[id]=val;
        }
    }
}
