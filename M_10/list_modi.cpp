#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    list<int> myList = {1, 2, 3, 4, 5, 6, 1, 8, 9};
    list<int> newList = {10, 20, 30, 40};
    vector<int> v = {100, 200, 300, 400};
    // myList.pop_back();
    // myList.pop_back();
    // myList.insert(next(myList.begin(),5), 100);
    // myList.erase(next(myList.begin(), 5));
    // myList.insert(next(myList.begin(),5), {100,300,400});
    // myList.insert(next(myList.begin(),5), newList.begin(), newList.end());
    // myList.insert(next(myList.begin(),5), v.begin(), v.end());;
    // myList.erase(next(myList.begin(), 5),next(myList.begin(), 8));
    // replace(myList.begin(), myList.end(), 1, 100);
    auto it = find(myList.begin(), myList.end(), 50);
    if (it == myList.end())
    {
        cout << "not found" << endl;
    }
    else
    {
        cout << "found" << endl;
    }
    // cout << *it << endl;

    // for (int val : myList)
    // {
    //     cout << val << " ";
    // }
    return 0;
}