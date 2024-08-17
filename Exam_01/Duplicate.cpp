#include <bits/stdc++.h>
using namespace std;

string Duplicate(vector<int>& a) {
    sort(a.begin(), a.end());
    for (int i = 1; i < a.size(); i++) {
        if (a[i] == a[i - 1]) {
            return "YES";
        }
    }
    return "NO";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << Duplicate(a) << endl;
    return 0;
}
