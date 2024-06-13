#include <bits/stdc++.h>
using namespace std;

int findEquilibriumIndex(const vector<int> &arr) {
    int totalSum = 0;
    int leftSum = 0;

    // Calculate the total sum of the array
    for (int num : arr) {
        totalSum += num;
    }

    // Iterate through the array and find the equilibrium index
    for (int i = 0; i < arr.size(); ++i) {
        totalSum -= arr[i]; // This is now the right sum for index i

        if (leftSum == totalSum) {
            return i; // Equilibrium index found
        }

        leftSum += arr[i]; // Update the left sum for next iteration
    }

    return -1; // No equilibrium index found
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int equilibriumIndex = findEquilibriumIndex(arr);
    cout << equilibriumIndex << " "; // Print the equilibrium index or -1 if not found

    return 0;
}
