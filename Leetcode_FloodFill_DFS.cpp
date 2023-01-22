#include <bits/stdc++.h>
using namespace std;
// To count the number of connected components
const int N = 1e5 + 10;
vector<int> graph[N];

void dfs(int i, int j, vector<vector<int>> &image, int InitialColor, int NewColor)
{
    if (i < 0 || j < 0 || i >= image.size() || j >= image[0].size() || image[i][j] != InitialColor)
        return;
    image[i][j] = NewColor; // where we shift the color

    dfs(i + 1, j, image, InitialColor, NewColor);
    dfs(i - 1, j, image, InitialColor, NewColor);
    dfs(i, j + 1, image, InitialColor, NewColor);
    dfs(i, j - 1, image, InitialColor, NewColor);
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
{
    if (image[sr][sc] == color)
        return image;
    dfs(sr, sc, image, image[sr][sc], color);
}

//There was no main present in leetcode