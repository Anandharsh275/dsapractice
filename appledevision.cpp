#include<bits/stdc++.h>
#define REP(i,n) for (int i = 0; i < n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vl vector<long>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
using namespace std;

lli Mod(lli a, lli b){
    return (a%b+b)%b;
}
void helper(lli index, lli n, lli sum1,lli sum2,vector<lli>&v,lli &mini){
if(index==n){
mini=min(mini,abs(sum1-sum2));
return ;
}
helper(index+1,n,sum1+v[index],sum2,v,mini);
helper(index+1,n,sum1,sum2+v[index],v,mini);
}
void solve(){
    lli n;
    cin >> n;
    vector<lli> weights(n);
    REP(i, n) cin >> weights[i];
    lli mini=INF;
    // vector<lli>v;
    helper(0,n,0,0,weights,mini);
    cout << mini << endl;
}
int main() {
    solve();
    return 0;
}
