/*
Graph representation:
===========================
Topic: Complete Graph -> 2D array
    0 ----- 1
    |\     / \
    | \   /   \
    |  \ /     \
    |   2 ----- 3
    L-----------|

# total nodes: 4
# total edges: 4
# Undirected + Unweighted
Matrix = # nodes * # nodes
       = 4*4
Matrix[i][j] = 1
0 <---> 1
0 <---> 2
0 <---> 3
1 <---> 2
1 <---> 3
2 <---> 3
*/
/* Time Complexity:
O(1) + O(1) + O(n^2) + O(n^2) = O(n^2) */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nodes = 4;      // TC: O(1)
    int matrix[nodes][nodes] = {};  // TC: O(n^2)
    // TC: O(n^2)
    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < nodes; j++)
        {
            matrix[i][j] =1;
        }
    }  
    // TC: O(n^2)
    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < nodes; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}