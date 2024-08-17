#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    vector<long long> Sum(N);
    Sum[0] = A[0];
    for (int i = 1; i < N; ++i) {
        Sum[i] = Sum[i - 1] + A[i];
    }

    for (int i = N - 1; i >= 0; --i) {
        cout << Sum[i] << " ";
    }

    return 0;
}