#include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
using namespace std;
// using namespace __gnu_pbds;
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
#include <bitset>
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
#define vl vector<long>
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;

lli Mod(lli a, lli b){
    return (a%b+b)%b;
}
int powm(int a, int b, int M) {
	int res=1;
	while(b) {
		if(b&1)
			res=(res*a)%M;
		a=(a*a)%M;
		b>>=1;
	}
	return res;
}
void helper(queue<int>&st,int k){
    if(st.size()>1){
        int first=st.front();
        st.pop();
        int second=st.front();
        st.pop();
        cout <<second<< " ";
        st.push(first);
    }
    else{
        int m=st.front();
        cout << m<< endl;
        st.pop();
    }
}
struct range{
    int l,r,index;
    bool operator<(const range &other)const{
        if(l==other.l)
        return r>other.r;
        return l<other.l;
    }
};
void solve() {
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); 
    lli n;
    cin >> n;
   vector<range>ranges(n);
   vector<bool>contains(n,0);
   vector<bool>container(n,0);
   for(int i=0; i<n; i++){
    cin >> ranges[i].l;
    cin >> ranges[i].r;
    ranges[i].index=i;
   }
   sort(ranges.begin(),ranges.end());
   int maxi=INT_MIN;
   for(int i=0; i<n; i++){
    if(ranges[i].r<=maxi){
        contains[ranges[i].index]=true;
    }
     maxi=max(maxi,ranges[i].r);
   }
   int mini=INT_MAX;
   for(int i=n-1; i>=0; i--){
    if(ranges[i].r>=mini){
        container[ranges[i].index]=true;
    }
     mini=min(mini,ranges[i].r);
   }
   for(int i=0; i<n; i++){
    cout << container[i] << " ";
   }
   cout << "\n";
   for(int i=0; i<n; i++){
    cout << contains[i] << " ";
   }
   cout << endl;
}
int  main() {
    solve();
    return 0;
}
