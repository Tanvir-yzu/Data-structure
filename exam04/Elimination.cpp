#include <bits/stdc++.h>
using namespace std;

void eliminationValu(string s)
{
    stack<char> stv;
    for (char c : s)
    {
        if (!stv.empty())
        {
            if (stv.top() == '0' && c == '1')
            {
                stv.pop();
            }
            else
            {
                stv.push(c);
            }
        }
        else
        {
            stv.push(c);
        }
    }

    if (stv.empty())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        string s;
        cin >> s;
        eliminationValu(s);
    }
    return 0;
}