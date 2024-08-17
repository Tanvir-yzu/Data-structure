#include <bits/stdc++.h>
using namespace std;
string isSorted( vector<int>& arr) {
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i - 1]) {
            return "NO";
        }
    }
    return "YES";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     
    int n;
    cin >> n;

    while (n--) {
        int x;
        cin >> x;

        vector<int> A(x);
        for (int i = 0; i < x; ++i) {
            cin >> A[i];
        }

        cout << isSorted(A) << endl;
    }

    return 0;

}