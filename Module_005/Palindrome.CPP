#include<bits/stdc++.h>
using namespace std;

bool is_palindrome(string str)
{
    int n = str.size();
    int l = 0, r = n - 1;
    while (l < r)
    {
        if(str[l] != str[r])
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}
int main()
{
    string str;
    cin >> str;
    if(is_palindrome(str)) cout << "palindrome!!" << endl;
    else cout << "Not Palindrome!!" << endl;

    return 0;
}