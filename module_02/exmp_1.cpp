//Description: Write a C++ program to initialize a vector with the integers from 1 to N and print the elements.
//Input
//Output
//10
//1 2 3 4 5 6 7 8 9 10



#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        v.push_back(i);
    }

    for (int it : v)
    {
        cout << it << " ";
    }

    return 0;
}