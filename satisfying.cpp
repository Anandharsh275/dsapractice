#include<bits/stdc++.h>
// #include "../../../../../MinGW/lib/gcc/mingw32/6.3.0/include/c++/bits/stl_queue.h"
// #include "../../../../../MinGW/lib/gcc/mingw32/6.3.0/include/c++/bits/stl_stack.h"
#define REP(i,n) for (int i = 0; i < n; i++)
#define REPP(i,n)for (int i=1; i<=n; i++)
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
#include <queue>
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
using namespace std;
void findlps(vector<int>&lps,string m){
    int first=0,second=1;
    while(second<m.length()){
        if(m[first]==m[second]){
            lps[second]=first+1;
            first++;
            second++;
        }
        else{
            if(first==0){
                lps[second]=0;
                second++;
            }
            else{
                first=lps[first-1];
            }
        }
    }
}
void solve() {
//  string n,m;
//  cin >> n;
//  cin >> m;
string m="abab";
vector<int>lps(m.size(),0);
findlps(lps,m);
for(int i=0 ;i<m.size(); i++){
    cout << lps[i] << " ";
}
}
// int first=0;
// int second=0;
// int count=0;
// while(n.size()-first>=m.size()-second){
// if(n[first]==m[second]){
//     first++;
//     second++;
// }
// if(second==m.size()){
//     count++;
//     second=lps[second-1];
// }
// else if(first<n.size()&&m[second]!=n[first]){
//     if(second!=0){
//         second=lps[second-1];
//     }else first=first+1;
// }
// }
// cout << count << "\n";
// }
int main() {
  
    
        // solve();
    string k="00";
    cout << stoi(k) << endl;

    return 0;
}
