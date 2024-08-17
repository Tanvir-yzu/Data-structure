#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     
    list<int> linkedList;
    int val;

    while (cin >> val && val != -1) {
        linkedList.push_back(val);
    }

    linkedList.sort();
    linkedList.unique();

    for (const auto& val : linkedList) {
        cout << val << " ";
    }

    return 0;
}