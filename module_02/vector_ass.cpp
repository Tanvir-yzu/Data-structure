#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    // cout << v.size()-1 << endl;v.[]
    //   cout<<v[0]<<endl;
    //   cout<<v.back()<<endl;
    for (auto it = v.begin(); it < v.end(); it++)
    {

        cout << *it <<" ";
    }

    return 0;
}