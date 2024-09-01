#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Point {
    int row, col;
    string path;
};
class Solution {
public:
    pair<string, int> findPath(int n, int m, vector<vector<char>>& labyrinth) {
        int startRow, startCol, endRow, endCol;
        // Find the starting and ending positions
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (labyrinth[i][j] == 'A') {
                    startRow = i;
                    startCol = j;
                } else if (labyrinth[i][j] == 'B') {
                    endRow = i;
                    endCol = j;
                }
            }
        }
        // BFS to find the shortest path
        vector<int> delrow = {-1, 0, 1, 0};
        vector<int> delcol = {0, -1, 0, 1};
        vector<vector<int>> visited(n, vector<int>(m, 0));
        queue<Point> q;
        q.push({startRow, startCol, ""});
        visited[startRow][startCol] = 1;
        while (!q.empty()) {
            Point curr = q.front();
            q.pop();
            if (curr.row == endRow && curr.col == endCol) {
                return {curr.path, curr.path.length()};
            }
            for (int i = 0; i < 4; ++i) {
                int nr = curr.row + delrow[i];
                int nc = curr.col + delcol[i];
                if (nr >= 0 && nr < n && nc >= 0 && nc < m && labyrinth[nr][nc] != '#' && !visited[nr][nc]) {
                    visited[nr][nc] = 1;
                    q.push({nr, nc, curr.path + (i == 0 ? "U" : (i == 1 ? "L" : (i == 2 ? "D" : "R")))});
                }
            }
        }
        return {"NO", -1};
    }
};
int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> labyrinth(n, vector<char>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> labyrinth[i][j];
        }
    }
    Solution solution;
    auto result = solution.findPath(n, m, labyrinth);
    if(result.first=="NO"){
        cout<<result.first<<endl;
    }
    else{
        cout<<"YES"<<endl;
        cout<<result.second<<endl;
        cout<<result.first<<endl;
    }
    return 0;
}