/***
 *
 * 463. Island Perimeter
 *
 * easy
 *
 * You are given row x col grid representing a map where grid[i][j] = 1 represents land and grid[i][j] = 0 represents water.
 *
 * Grid cells are connected horizontally/vertically (not diagonally). The grid is completely surrounded by water, and there is exactly one island (i.e., one or more connected land cells).
 *
 * The island doesn't have "lakes", meaning the water inside isn't connected to the water around the island. One cell is a square with side length 1. The grid is rectangular, width and height don't exceed 100. Determine the perimeter of the island.
 *
 * By ZhengMing.Dai
 *
 */
#include <iostream>
#include <vector>

using namespace std;

class Solution {
    constexpr static int dx[4] = {0, 1, 0, -1};  //(0,1) 右| (1,0) 下| (0,-1) 左| (-1,0) 上
    constexpr static int dy[4] = {1, 0, -1, 0};  //(0,1) 右| (1,0) 下| (0,-1) 左| (-1,0) 上
public:
    int dfs(int x, int y, vector<vector<int>>& grid, int m, int n){

        if (x < 0 || x >= m || y < 0 || y >= n || grid[x][y] == 0){
            return 1;
        }
        if (grid[x][y] == 2){
            return 0;
        }

        grid[x][y] = 2;   // 已计算的岛屿标记为2、防止重复计算
        int res = 0;

        for (int i = 0; i < 4; i++){  // 上下左右相邻岛屿检查
            int tx = x + dx[i];
            int ty = y + dy[i];
            res += dfs(tx, ty, grid, m, n);
        }
        return res;
    }

    int islandPerimeter(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int ans = 0;
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                if (grid[i][j] == 1){
                    ans += dfs(i, j, grid, m, n);
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution IslandPerimeter;
    vector<vector<int>> grid = {{0,1,0,0},{1,1,1,0},{0,1,0,0},{1,1,0,0}};
    cout << "grid = [[0,1,0,0],[1,1,1,0],[0,1,0,0],[1,1,0,0]]" << endl;
    cout << "The perimeter is the: " << IslandPerimeter.islandPerimeter(grid) << endl;
    grid = {{1,0}};
    cout << "grid = [[1,0]]" << endl;
    cout << "The perimeter is the: " << IslandPerimeter.islandPerimeter(grid) << endl;
    grid = {{1}};
    cout << "grid = [[1]]" << endl;
    cout << "The perimeter is the: " << IslandPerimeter.islandPerimeter(grid) << endl;

    return 0;
}