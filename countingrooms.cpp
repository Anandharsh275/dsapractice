#include <iostream>
#include <queue>
#include <vector>
using namespace std;
class Solution {
private:
    void bfs(int row, int col,vector<vector<int>>& vis,vector<vector<char>>& grid,vector<int>& delrow,vector<int>& delcol) {
        vis[row][col]=1;
        queue<pair<int,int>>ans;
        ans.push({row,col});
        while(!ans.empty()){
        int r=ans.front().first;
        int c=ans.front().second;
        ans.pop();
        for(int i=0; i<4; i++){
            int nr=r+delrow[i];
            int nc=c+delcol[i];
            if(nr>=0&&nr<grid.size()&&nc>=0&&nc<grid[0].size()&&vis[nr][nc]==0&&grid[nr][nc]=='.'){
                vis[nr][nc]=1;
                ans.push({nr,nc});
            }
        }
        }

        }
    

public:
    int countIslands(int n, int m,vector<vector<char>>& grid) {
        int count = 0;
        vector<int> delrow = {-1, 0, 1, 0};
        vector<int> delcol = {0, -1, 0, 1};
        vector<vector<int>> vis(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (vis[i][j] == 0 && grid[i][j] == '.') {
                    count++;
                    bfs(i, j, vis, grid, delrow, delcol);
                }
            }
        }
        return count;
    }
};

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n, m;
    cin >> n >> m;
    vector<vector<int>>arr;
   
    for(int i=0;i <m; i++){
        int a,b;
        cin>>a ;
        cin>>b ;
        arr[i][0]=a;
        arr[i][1]=b;
    }
   

    return 0;
}
