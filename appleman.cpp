#include <bits/stdc++.h>
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

void output() {}

bool comparePairs(const ii &a, const ii &b) {
    if (a.ff != b.ff) {
        return a.ff < b.ff;
    }
    return a.ss < b.ss;
}

int main() {
    int n, k;
    cin >> n >> k;
    string m;
    cin >> m;

    map<char, int> ans;

    for (int i = 0; i < n; i++) {
        ans[m[i]]++;
    }

    priority_queue<int> pq; // Max heap to get the maximum frequency

    for (auto it : ans) {
        pq.push(it.second);
    }

    lli count = 0;

    while (!pq.empty() && k > 0) {
        int freq = pq.top();
        pq.pop();

        int cardsToChoose = min(k, freq);
        count += 1LL * cardsToChoose * cardsToChoose;
        k -= cardsToChoose;
    }

    cout << count << endl;

    return 0;
}
