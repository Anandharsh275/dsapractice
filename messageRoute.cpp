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
 
vi ar[100001];
bool vis[100001];
int pre[100001];
int dis[100001];
 int n,m;
void dfs(int node) {
    vis[node] = true;

    for (int child : ar[node]) {
        if (!vis[child]) {
            pre[child] = node;
            dis[child] = dis[node] + 1;
            dfs(child);
        }
    }
}
int main()
{
	int a,b;
    cin>> n>> m;
    REP(i,m)cin>> a>> b,ar[a].pb(b),ar[b].pb(a);
    dfs(1);
    if(vis[n]){
        cout<< dis[n]+1<<endl;
        int path=n;
        vector<int>res;
        while(path!=0)res.pb(path),path=pre[path];
        reverse(res.begin(),res.end());
        for(int d:res){
            cout<< d <<" ";
        }
    }
     else cout<< "IMPOSSIBLE"<<endl;
     return 0;
}