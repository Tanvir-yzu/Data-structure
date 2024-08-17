<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
bool hasDuplicate(const vector<int> &arr, int t)
{
    int l = 0, r = arr.size() - 1;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == t)
        {
            if (mid > 0 && arr[mid - 1] == t)
            {
                return true;
            }
            if (mid < arr.size() - 1 && arr[mid + 1] == t)
            {
                return true;
            }
            return false;
        }
        else if (arr[mid] < t)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return false;
}
int main()
{
    int n, t;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> t;

    if (hasDuplicate(arr, t))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
=======
#include <bits/stdc++.h>
using namespace std;
bool hasDuplicate(const vector<int> &arr, int t)
{
    int l = 0, r = arr.size() - 1;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == t)
        {
            if (mid > 0 && arr[mid - 1] == t)
            {
                return true;
            }
            if (mid < arr.size() - 1 && arr[mid + 1] == t)
            {
                return true;
            }
            return false;
        }
        else if (arr[mid] < t)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return false;
}
int main()
{
    int n, t;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> t;

    if (hasDuplicate(arr, t))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
>>>>>>> 90fd57abfba6f02d200fcbd108dd2ca87465d4f1
}