#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, Q;
    cin >> N >> Q;

    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<long long> prefix(N + 1, 0);
    for (int i = 0; i < N; i++) {
        prefix[i + 1] = prefix[i] + A[i];
    }

    for (int i = 0; i < Q; i++) {
        int L, R;
        cin >> L >> R;
        cout << prefix[R] - prefix[L - 1] << endl;
    }

    return 0;
}