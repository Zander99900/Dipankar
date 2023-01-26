#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<char>> &grid, int i, int j)
{
    if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == '0')
        return;
    else 
    if(grid[i][j] == '1') grid[i][j] = '0';
    dfs(grid, i+1, j);
    dfs(grid, i-1, j);
    dfs(grid, i, j+1);
    dfs(grid, i, j-1);
}
int numIslands(vector<vector<char>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    if (n == 0 || m == 0)
        return 0;
    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] != '0')
            {
                ct++;
                dfs(grid, i, j);
            }
        }
    }
}
