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
 
int main()
{
	int n;
    cin >> n;
    vi arr(n);
    int count1=0;
    for(int i=0; i<n; i++){
        int k;
        cin>> k;
        arr[i]=k;
        if(k==1){
            count1++;
            arr[i]=-arr[i];
        }else arr[i]=1;
    }
    
    int ma=0;
    int ans=0;
    if(count1==n){
        cout << n-1 << endl;
        return 0;
    }else{
        
        for(int i=0; i<n; i++){
            ma=max(0,arr[i]+ma);
            
            ans=max(ans,ma);
        }
    }
    cout << ans+count1 << endl; 
     
    return 0;
}