#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
using namespace std;
 int n;
bool poss(int mid,vector<int>&arr){
    for(int i=n-1; i>0; i--){
        if(arr[i]>mid){
            arr[i-1]+=arr[i]-mid;
            arr[i]=mid; 
        }
    }
    return*max_element(arr.begin(),arr.end())<=mid;
}
int main()
{
	int m;
    string s;
    cin>>n;
    
    vi arr;
  for(int i=0;i<n; i++){
    int k;
    cin>>k;
    arr.push_back(k);
  }
    int lo=0;
    int ho=1e9;
    int res=1e9;
    while(lo<=ho){
        int mid=(lo+ho)/2;
        if(poss(mid,arr)){
            res=mid;
            ho=mid-1;
        }else{
            lo=mid+1;
        }
    }
    cout << res <<endl;
}