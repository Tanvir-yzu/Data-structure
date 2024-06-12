#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> leftSum(n, 0);//init stor
    int sum = 0; // init sum
    for (int i = 0; i < n; ++i)
    {
        leftSum[i] = sum; // stor leftSum
        sum += arr[i]; // update 
    }
    for (int i = 0; i < n; ++i)
    {
        cout << leftSum[i] << " ";// print
    }

    return 0;
}