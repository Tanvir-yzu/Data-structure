#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;

    queue<string> l;

    while (q--)
    {
        int c;
        cin >> c;

        if (c == 0)
        {
            string name;
            cin >> name;
            l.push(name);
        }
        else if (c == 1)
        {
            if (!l.empty())
            {
                cout << l.front() << endl;
                l.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}