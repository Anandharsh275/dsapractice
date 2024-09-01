//SSCCSSSCS
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to create the prefix array
vector<vector<int>> createPrefixArray(const string& s) {
    int n = s.size();
    vector<vector<int>> prefix(n + 1, vector<int>(2, 0)); // Two characters

    for (int i = 0; i < n; ++i) {
        prefix[i + 1][0] = prefix[i][0];
        prefix[i + 1][1] = prefix[i][1];
        
        if (s[i] == 'A') { // Assuming first character is 'A'
            prefix[i + 1][0]++;
        } else if (s[i] == 'B') { // Assuming second character is 'B'
            prefix[i + 1][1]++;
        }
    }

    return prefix;
}

// Function to check if substring of size 3 contains both characters
bool containsBothCharacters(const vector<vector<int>>& prefix, int start) {
    // Calculate the counts of both characters in the range [start, start + 2]
    int countA = prefix[start + 3][0] - prefix[start][0];
    int countB = prefix[start + 3][1] - prefix[start][1];
    
    return (countA > 0 && countB > 0);
}

int main() {
    string s = "SSCCSSSCS"; // Example input
    vector<vector<int>> prefix = createPrefixArray(s);
    
    for (int i = 0; i <= s.size() - 3; ++i) {
        if (containsBothCharacters(prefix, i)) {
            cout << "Substring from index " << i << " contains both characters.\n";
        } else {
            cout << "Substring from index " << i << " does not contain both characters.\n";
        }
    }

    return 0;
}
