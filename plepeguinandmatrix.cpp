#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n, m, d;
    cin >> n >> m >> d;

    vector<vector<int>> matrix(n, vector<int>(m));
    vector<int> elements;

    // Input matrix and store elements in a 1D vector
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
            elements.push_back(matrix[i][j]);
        }
    }

    // Sort the 1D vector of elements
    sort(elements.begin(), elements.end());

    // Calculate the median element (middle element after sorting)
    int medianElement = elements[elements.size() / 2];

    // Calculate the minimum moves needed for each element
    int moves = 0;
    for (int i = 0; i < elements.size(); ++i) {
        // Check if it's possible to make all elements equal
        if (abs(elements[i] - medianElement) % d != 0) {
            cout << "-1" << endl;
            return 0;
        }
        moves += abs((elements[i] - medianElement) / d);
    }

    // Output the result
    cout << moves << endl;

    return 0;
}
