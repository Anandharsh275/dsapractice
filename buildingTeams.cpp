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
int n,m;
vector<bool>vis;
vi color;
vector<vector<int>>arr;
 bool dfs(int u,int c,int parent){
    vis[u]=1;
    color[u]=c;
    for(auto child:arr[u]){
        if(child==parent)continue;
        if(color[child]==0)
            if(!dfs(child,(color[u]^3),u))
            return false;
            if(color[child]==color[u])
                return false;
    }
return true;
 }
int main()
{
	
    cin >> n >> m;
   arr.resize(n+1);
   color.resize(n+1);
   vis.resize(n+1);
    int a ,b;
    bool ans=true;
    REP(i,m)cin >> a >> b,arr[a].pb(b),arr[b].pb(a);
    for(int i=1;i<=n; i++){
        if(!vis[i]){
            if(!dfs(i,1,-1)){
            ans= false;
            cout << "IMPOSSIBLE" << endl;
            return 0;
            }
        }
    }
    if(ans==false){
        cout<< "IMPOSSIBLE" << endl;
        return 0;
    }else {
        for(int i=1; i<=n; i++){
            cout<< color[i] << " ";
        }
    }
     
    return 0;
}