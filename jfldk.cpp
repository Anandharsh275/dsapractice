#include <bits/stdc++.h>
using namespace std;
void solve() {
  long long n, k;
  cin >> n >> k;
  vector<long long> arr(n);
  for (auto &x : arr)
    cin >> x;
  if (n == 1) {
    cout << arr[0] << endl;
    return;
  }
  long long maxValue = *max_element(arr.begin(), arr.end());
  long long l = 0;
  long long r = k - 1;
  for (int i = 0; i < n; ++i) {
    if (arr[i] == maxValue) {
      continue;
    }
    long long remainder =(maxValue-arr[i]) % k;
    long long quotient =(maxValue-arr[i]) / k;
    if (remainder == 0 && quotient % 2) {
      cout << -1 << endl;
      return;
    }
    if (remainder==0&&quotient%2==0) {
      continue;
    }
    if (quotient%2==0){
      r = min(r,k-remainder-1);
    } else {
      l = max(l,k-remainder);
    }
  }
  if(l == k || l > r) {
   cout << -1 << endl;
   return;
  }

  cout << maxValue + l << endl;

}

void init() {}

int main() {
  // int t;
  // cin >> t;
  // while(t--){
  //   solve();
  // }
cout << (1 << 0) << endl;
  return 0;
}