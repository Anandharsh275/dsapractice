#include<bits/stdc++.h>
using namespace std;
const int N=1e5;

int main(){
    vector<int> A(N);
for(auto &e: A)
{
    cin>>e;
    assert(e>0 && e<=1e9);
}

    vector<vector<int>> bitSum(30, vector<int> (N));
for(int i=0; i<N; i++)
{
    for(int bit=0; bit<30; bit++)
    {
        bitSum[bit][i] = (((1<<bit)&A[i]) > 0);
        if(i)   bitSum[bit][i] += bitSum[bit][i-1];
    }
}
    return 0;
}