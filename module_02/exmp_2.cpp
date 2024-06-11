// Description: Write a C++ program to initialize a vector of size 5 with all elements set to the value N and print the elements.
// Input
// Output
// 7
// 7 7 7 7 7

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(5, n);
    for (int s : v)
    {
        cout << s << " ";
    }

    return 0;
}