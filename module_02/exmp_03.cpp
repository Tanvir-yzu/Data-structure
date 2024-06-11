#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    vector<int> v(arr, arr + arrSize);
    for (int s : v)
    {

        cout << s << endl;
    }
    return 0;
}