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
int main()
{
	
   int n;
   cin >> n;
   ii arr[n];
   REP(i,n)cin >> arr[i].ff,cin >> arr[i].ss;
   sort(arr,arr+n,comparePairs);
   int count=1;
   int ans=1;
   for(int i=0; i<n-1; i++){
    if(arr[i]==arr[i+1]){
        count++;
        ans=max(ans,count);
    }else count=1;
   
   }
   cout<< ans << endl;
    return 0;
}