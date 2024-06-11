#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    v.erase(v.begin() + 3);
    for(int x: v){
    cout<< x << endl;
    }
    // vector<int> v2 ={10,20,30};
    // v.insert(v.begin() + 3, v2.begin(), v2.end());
    // //v.insert(v.end() - 3, 10);
    // for(int x: v){
    // cout << x << endl;
    // }
    // v.pop_back();
    // v.insert(v.begin() + 3, 10);
    // for (int i = 0; i < v.size(); ++i)
    // {
    //     cout << v[i] << endl;
    // }
    // vector<int> x = {1, 2, 3};
    // v = x;
    // for (int i = 0; i < x.size(); ++i)
    // {
    //     cout << v[i] << endl;
    // }
    return 0;
}