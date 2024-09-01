#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
int a[N],tree[4*N];
void build(int node,int start,int end){
    if(start==end){
        tree[node]=a[start];
        return;
    }
    int mid=(start+end)/2;
    build(2*node,start,mid);
    build(2*node+1,mid+1,end);
    // tree[node]=tree[2*node]+tree[2*node+1];//this line use to store the sum like prefix sum 
    // now its time to store maximum for each node
    tree[node]=max(tree[2*node],tree[2*node+1]);
}
int query(int node,int start,int end,int l,int r){
    if(start>r||end<l){//no overlap
        return 0;
    }
    if(l<=start&&end<=r){//complete overlap
        return tree[node];
    }
    int mid=(start+end)/2;
    int q1=query(2*node,start,mid,l,r);
    int q2=query(2*node+1,mid+1,end,l,r);
    return q1+q2;
}
int query1(int node,int start,int end,int l,int r){
    if(start>r||end<l){//no overlap
        return INT_MIN;
    }
    if(l<=start&&end<=r){//complete overlap
        return tree[node];
    }
    int mid=(start+end)/2;
    int q1=query(2*node,start,mid,l,r);
    int q2=query(2*node+1,mid+1,end,l,r);
    return max(q1,q2);
}
void update(int node,int start,int end,int index,int value){
    if(start==end){
        a[start]=value;
        tree[node]=value;
        return;
    }
    int mid=(start+end)/2;
    if(index<=mid){
        update(2*node,start,mid,index,value);
    }else{
        update(2*node+1,mid+1,end,index,value);
    }
     tree[node]=max(tree[2*node],tree[2*node+1]);
}
signed main(){
    int n;
    cin >> n;
    for(int i=0 ;i<n ;i++){
        cin >> a[i];
    }
    build(1,0,n-1);
    // for(int i=1 ;i<15;i++){
    //     cout << tree[i] << endl;
    // }
    while(true){
        int type;
        cin >> type;
        if(type==-1){
            break;
        }
        if(type==1){
            int l,r;
            cin >> l >> r;
            int ans=query1(1,0,n-1,0,n-1);
            cout << ans << endl;
        }else if(type==2){
            int idx,val;
            cin >> idx >> val;
            update(1,0,n-1,idx,val);
            cout << query(1,0,n-1,0,n-1) << endl;
        }
    }
    return 0;
}