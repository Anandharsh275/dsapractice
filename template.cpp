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
    int n;
    cin >> n;
    int arr[n];
    REP(i,n)cin >> arr[i];
    vi first;
    vi second;
    int ans=0;
    first.pb(arr[0]);
    for(int i=0; i<n; i++){
        if(first.size()>0&&second.size()>0){
            if(arr[i]<=first.back()&&arr[i]<=second.back()){
                if(first.back()<second.back()){
                    first.pb(arr[i]);
                }else second.pb(arr[i]);
            }else if(arr[i]<=first.back()){
                first.pb(arr[i]);
            }else if(arr[i]<=second.back()){
                second.pb(arr[i]);
            }
            else {
                
                if(first.back()<=second.back()){
                    first.pb(arr[i]);
                }else {
                    second.pb(arr[i]);
                }
                ans++;
            }
        }
        else{
            if(first.back()<arr[i])second.pb(arr[i]);
            else first.pb(arr[i]);
        }
    }
        cout<< ans <<endl;
        return;
 }
int main()
{
	
    int t;
    cin >> t;
    while(t--){
        output();   
    }
    return 0;
}