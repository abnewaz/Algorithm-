/*
Graph representation:
===========================
Topic: Adjacency List -> Linked List / C++ vector
0 -----------> 1
       2      /^.
            4/   \7
           \/     \
           2 <---- 3
                8
0 -> (1, 2)
1 -> (2, 4)
2 -> 
3 -> (2, 8), (1, 7)
*//* 
Space Complexity: 
O(1) + O(n) + O(n^2) + O(1) = O(n^2)
Time Complexity: 
O(1) + O(n^2) + O(n^2) = O(n^2)
*//* 
pair: pair<int, int> variable_pair[n];
      variable_pair[0].push_back({1, 2}); 
To access:  variable_pair.first
            variable_pair.first
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nodes = 4;      // SC & TC: O(1)
    vector<pair<int,int>>adj_list[nodes];//TC:O(1) & SC:O(n)
    // TC & SC: O(E * 2) -> O(E) -> O(n^2)
    adj_list[0].push_back({1, 2});  
    adj_list[1].push_back({2, 4});
    adj_list[3].push_back({2, 8});
    adj_list[3].push_back({1, 7});
    
    // TC: O(E * 2) -> O(E) -> O(n^2) & SC:O(1)
    for (int i = 0; i < nodes; i++)
    {
        cout << i << " ->";
        for (int j = 0; j < adj_list[i].size(); j++)
        {
            cout <<"( " << adj_list[i][j].first<< ", " << adj_list[i][j].second << "), ";
        }
        cout << endl;
    }  
    return 0;
}