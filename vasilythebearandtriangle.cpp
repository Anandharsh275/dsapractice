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

void solve(){
  int n,k;
  cin >> n >> k;
  ii arr[n];
  int a,b;
  for(int i=0; i<n; i++){
    cin >> arr[i].ff;
    cin  >> arr[i].ss;
  }
  int joy=INT_MIN;
  int maxjoy=INT_MIN;
 for(int i=0; i<n; i++){
    if(arr[i].ss>k){
        joy=arr[i].ff-(arr[i].ss-k);
    }
    else{
        joy=arr[i].ff;
    }
    if(joy>maxjoy){
        maxjoy=joy;
    }
 }
 cout << maxjoy << endl;
}
int main() {
    solve();
    return 0;
}
