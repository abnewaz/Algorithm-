#include<bits/stdc++.h>
using namespace std;
int n_power_m(int n, int m)
{
    if(n == 0) return 0;
    else if(m == 0) return 1;
    else return n_power_m(n, m-1) * n;
}
int main()
{
    int n, m;
    cin >> n >> m;
    cout << n << " to the power " << m << " is: " << n_power_m(n, m) << endl;
    return 0;
}