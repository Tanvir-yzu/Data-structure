#include <bits/stdc++.h>
using namespace std;
bool isString( string &s)
{

    stack<char> stv;
    for (char ch : s)
    {

        if (stv.empty())
        {
            stv.push(ch);
        }
        else
        {

            char top = stv.top();

            if ((top == '0' && ch == '1') || (top == '1' && ch == '0'))
            {
                stv.pop();
            }
            else
            {

                stv.push(ch);
            }
        }
    }

    return stv.empty();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;

    cin >> a;
    while (a--)
    {
        string s;
        cin >> s;

        if (isString(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}