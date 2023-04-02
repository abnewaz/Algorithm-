/*
Graph representation:
===========================
Topic: Adjacency Matrix -> 2D array
0 ------------ 1
              / \
             /   \
            /     \
           2 ----- 3
# total nodes: 4
# total edges: 4
# Undirected + Unweighted
Matrix = # nodes * # nodes
       = 4*4
Matrix[i][j] = 1
        iff (i -> j)
0 -> 1
1 -> 0
1 -> 2
1 -> 3
2 -> 1
2 -> 3
3 -> 1
3 -> 2
*//* 
Space Complexity: O(n^2)
Time Complexity: 
O(1) + O(1) + O(n^2) + O(n^2) = O(n^2) */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nodes = 4;      // TC: O(1)
    int matrix[nodes][nodes] = {};  // TC: O(n^2)
    //[maximum num of edge in a graph could be n x n -> n^2:]
    //O(E)  // E -> n^2     
    // A-------B
    // nxn -> n^2
    matrix[0][1] = 1;   // TC: O(1)
    matrix[1][0] = 1;
    matrix[1][2] = 1;
    matrix[1][3] = 1;
    matrix[2][1] = 1;
    matrix[2][3] = 1;
    matrix[3][1] = 1;
    matrix[3][2] = 1;
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