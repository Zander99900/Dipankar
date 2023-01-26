// Nakul wants to know the minimum number of moves a knight takes to reach from one square to another square of a chess board (8X8). Nakul is brilliant and he had already written a program to solve the problem. Nakul wants to know whether Anjali can do it. Anjali is very weak in programming. Help her to solve the problem.

// A knight can move in the shape of an "L" in a chessboard - two squares either forward, backward, left, or right and then one square to its left or right. A knight move is valid if it moves as mentioned above and it is within the boundary of the chessboard (8 X 8).
#include <bits/stdc++.h>
using namespace std;
const int INFIN = 1e9+10;
int vis[8][8];
int level[8][8];

int getX(string s)
{
    return s[0] - 'a';
}
int getY(string s)
{
    return s[1] - '1';
}

bool isValid(int x, int y){
    return x >= 0 && y >= 0 && x < 8 && y < 8;
}

vector<pair<int, int>> movements = {
    {-1, 2}, {1, 2},
    {-1, -2}, {1, -2},
    {2, -1}, {2, 1},
    {-2, -1}, {-2, 1}
};

void reset()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            level[i][j] = INFIN;
            vis[i][j] = 0;
        }
    }
}

int bfs(string source, string dest)
{
    int sourceX = getX(source);
    int sourceY = getY(source);
    int destX = getX(dest);
    int destY = getY(dest);
    queue<pair<int, int>> q;
    q.push({sourceX, sourceY});
    vis[sourceX][sourceY] = 1;
    level[sourceX][sourceY] = 0;
    while (!q.empty())
    {
        pair<int, int> vertex = q.front();
        int x = vertex.first, y = vertex.second;
        q.pop();
        for (auto movement : movements)
        {
            int childX = movement.first + x;
            int childY = movement.second + y;
            if (!isValid(childX, childY)) continue;
            if (!vis[childX][childY]){
                q.push({childX, childY});
                level[childX][childY] = level[x][y] + 1;
                vis[childX][childY] = 1;
            }
        }
        if(level[destX][destY] != INFIN){break;}
    }
    return level[destX][destY];
}

int main()
{
    int n; // n represents no of vertices & m represents no. of edges
    cin >> n;
    while (n--)
    {
        reset();
        string v1, v2;
        cin >> v1 >> v2;
        cout << bfs(v1, v2) << endl;
    }

    return 0;
}

/*Input:
3
a1 h8
a1 c2
h8 c3
*/