#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int, int>
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

    int n;
    cin >> n;
    int arr[n];
    REP(i, n) cin >> arr[i];

    // Find the first position of a segment that needs to be reversed
    int start = 0;
    while (start < n - 1 && arr[start] < arr[start + 1]) {
        start++;
    }

    // Find the last position of the segment
    int end = start;
    while (end < n - 1 && arr[end] > arr[end + 1]) {
        end++;
    }

    // Reverse the segment
    reverse(arr + start, arr + end + 1);

    // Check if the array is sorted now
    bool sorted = is_sorted(arr, arr + n);

    // Output the result
    if (sorted) {
        cout << "yes" << endl;
        cout << start + 1 << " " << end + 1 << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
