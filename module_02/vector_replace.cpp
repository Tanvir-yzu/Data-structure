#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 2, 2, 3, 4, 5, 6, 2, 2};
    // replace(v.begin(), v.end()-1, 2, 100);
    // for(int i : v){
    // cout<<i<<" ";
    // }
    bool found = false;
    auto it = find(v.begin(), v.end(), 3);
    if (it == v.end())
    {
        found = false;
    }
    else
    {
        found = true;
    }

    if (found)
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }
    return 0;
}