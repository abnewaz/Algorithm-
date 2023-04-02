/*
Graph representation:
===========================
Topic: Adjacency List -> Linked List / C++ vector
0 ------------ 1
              / \
             /   \
            /     \
           2 ----- 3

0 -> 1
1 -> 0, 2, 3
2 -> 1, 3
3 -> 1, 2
*//* 
Space Complexity: 
O(1) + O(n) + O(n^2) + O(1) = O(n^2)
Time Complexity: 
O(1) + O(n^2) + O(n^2) = O(n^2)
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nodes = 4;      // SC & TC: O(1)
    vector<int>adj_list[nodes];//TC:O(1) & SC:O(n)
    // TC & SC: O(E * 2) -> O(E) -> O(n^2)
    adj_list[0] = {1};  
    adj_list[1] = {0, 2, 3};
    adj_list[2] = {1, 3};
    adj_list[3] = {1, 2};
    
    // TC: O(E * 2) -> O(E) -> O(n^2) & SC:O(1)
    for (int i = 0; i < nodes; i++)
    {
        cout << i << " ->";
        for (int j = 0; j < adj_list[i].size(); j++)
        {
            cout << adj_list[i][j] << " ";
        }
        cout << endl;
    }  
    return 0;
}