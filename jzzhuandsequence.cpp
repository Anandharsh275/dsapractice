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

 void output(){
 }
 bool comparePairs(const ii &a, const ii &b) {
    if (a.ff != b.ff) {
        return a.ff < b.ff;
    }
    return a.ss < b.ss;
}
   lli seq(lli n, lli first, lli second) {
    if (n <= 0) {
        return 0; // Base case for non-positive n
    }

    vector<lli> dp(n + 1, 0);
    dp[1] = first;
    dp[2] = second;

    for (lli i = 3; i <= n; i++) {
        dp[i] = (dp[i - 1] - dp[i - 2] + mod) % mod;
    }

    return dp[n];
}
lli Mod(lli a, lli b){
    return (a%b+b)%b;
}
int main()
{
	
   lli x,y,n;
   cin>> x >> y;
   cin >> n;
//    if(n==0){

//    }
// vector<long> dp(n+1,-1);
//  lli ans=(seq(n,x,y));
 if(n%6==0){
    cout<< Mod(x-y,mod);
 }
 if(n%6==1){
    cout << Mod(x,mod);
 }
 if(n%6==2){
    cout << Mod(y,mod);
 }
 if(n%6==3){
    cout << Mod(y-x,mod);
 }
 if(n%6==4){
    cout << Mod(x*-1,mod);
 }
 if(n%6==5){
    cout << Mod(y*-1,mod);
 }
    return 0;
}