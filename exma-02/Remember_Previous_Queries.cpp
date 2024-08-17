#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    list<int> data;

    for (int i = 0; i < T; ++i)
    {
        int X, V;
        cin >> X >> V;

        if (X == 0)
        {
            data.push_front(V);
        }
        else if (X == 1)
        {
            data.push_back(V);
        }
        else if (X == 2)
        {
            if (V >= 0 && V < data.size())
            {
                auto it = data.begin();
                for (int j = 0; j < V; ++j)
                {
                    ++it;
                }
                data.erase(it);
            }
        }

        cout << "L -> ";
        for (auto it = data.begin(); it != data.end(); ++it)
        {
            cout << *it << " ";
        }
        cout << endl;

        cout << "R -> ";
        if (!data.empty())
        {
            auto it = data.end();
            do
            {
                --it;
                cout << *it << " ";
            } while (it != data.begin());
        }
        cout << endl;
    }

    return 0;
}
