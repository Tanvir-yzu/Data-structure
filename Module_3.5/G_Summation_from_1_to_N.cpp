<<<<<<< HEAD
#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long N;
    cin >> N;

    // Using the formula to compute the sum
    long long sum = N * (N + 1) / 2;

    cout << sum << endl;

    return 0;
}
=======
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
>>>>>>> 90fd57abfba6f02d200fcbd108dd2ca87465d4f1
