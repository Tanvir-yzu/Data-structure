#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int a[5]= {1, 2, 3, 4, 5};
    vector<int> a={1, 2, 3, 4, 5};
    //list<int> mylist(10, 5);
    list<int> mylist(a.begin(),a.end());
    for (auto it = mylist.begin(); it != mylist.end(); it++)
    {
        cout << *it << " ";
    }
   
    
    return 0;
}