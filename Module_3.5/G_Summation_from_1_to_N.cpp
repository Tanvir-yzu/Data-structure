#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long N;
    cin >> N;

    // Using the formula to compute the sum
    long long sum = N * (N + 1) / 2;

    cout << sum << endl;

    return 0;
}
