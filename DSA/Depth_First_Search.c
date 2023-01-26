#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int visited[7] = {0, 0, 0, 0, 0, 0, 0}; // it is important to make it in matrix because it will check entire rows at once
int m[7][7] = {
    //     0  1  2  3  4  5  6
    /*0*/ {0, 1, 1, 1, 0, 0, 0},
    /*1*/ {1, 0, 1, 0, 0, 0, 0},
    /*2*/ {1, 1, 0, 1, 1, 0, 0},
    /*3*/ {1, 0, 1, 0, 1, 0, 0},
    /*4*/ {0, 0, 1, 1, 0, 1, 1},
    /*5*/ {0, 0, 0, 0, 1, 0, 0},
    /*6*/ {0, 0, 0, 0, 1, 0, 0}}; // the graph is created

void DFS(int node) //this function only has two works 1. it will explore a node 2. if it is visited earlier then it will move to ecplore other nodes
{
    visited[node] = 1;
    printf("%d ", node);
    for (int j = 0; j < 7; j++)
    {
        if (m[node][j] == 1 && !visited[j])
        {
            DFS(j); //if the node is note visited then we will again call this function and mark that node as visited
        }
    }
}
int main()
{
    DFS(4);
    return 0;
}