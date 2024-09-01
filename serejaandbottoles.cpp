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

    int a, b, n;
    std::cin >> a >> b >> n;

    // Check if it's possible to lengthen the number
    bool possible = false;
    for (int digit = 0; digit <= 9; ++digit) {
        if ((a * 10 + digit) % b == 0) {
            a = a * 10 + digit;
            possible = true;
            break;
        }
    }

    // If possible, perform the lengthening operation n times
    if (possible) {
        std::cout << a;
        for (int i = 1; i < n; ++i) {
            std::cout << "0";
        }
        std::cout << endl;
    } else {
        std::cout << "-1" << endl;
    }

    return 0;
}
