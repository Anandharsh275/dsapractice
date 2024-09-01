#include <iostream>
using namespace std;
long long countSpoken(long long x) {
    
    long long bro = x / 3 + x / 5 - x / 15;
    
    return x - bro;
}

int main() {
    long long N;
    cin >> N;
    
    long long low = 1, high = 1e8, result = 0;
    
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long count = countSpoken(mid);
        
        if (count < N) {
            low = mid + 1;
        } else {
            result = mid;
            high = mid - 1;
        }
    }
    
    cout << result << endl;
    return 0;
}
