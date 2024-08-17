#include <iostream>
#include <list>

using namespace std;

class List {
    list<int> lst;

public:
    void insertAll(int index, int val) {
        if (index < 0 || index > lst.size()) {
            cout << "Invalid" << endl;
            return;
        }

        auto it = lst.begin();
        for (int i = 0; i < index; ++i) {
            ++it;
        }
        lst.insert(it, val);

        printList();
    }

    void printList() {
        cout << "L -> ";
        for (auto it = lst.begin(); it != lst.end(); ++it) {
            cout << *it << " ";
        }
        cout << endl;

        cout << "R -> ";
        for (auto it = lst.rbegin(); it != lst.rend(); ++it) {
            cout << *it << " ";
        }
        cout << endl;
    }
};

int main() {
    int T;
    cin >> T;

    List list;
    for (int i = 0; i < T; ++i) {
        int X, V;
        cin >> X >> V;
        list.insertAll(X, V);
    }

    return 0;
}
