#include <bits/stdc++.h>
using namespace std;

string StackAndQueue(int n, stack<int> s, queue<int> q)
{
    if (s.size() != q.size())
    {
        return "NO";
    }
     while (!s.empty() && !q.empty()) {
        if (s.top() == q.front()) {
            s.pop();
            q.pop();
        } else {
            return "NO";
        }
    }
    return (s.empty() && q.empty()) ? "YES" : "NO";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;

    stack<int> stv;
    queue<int> qv;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        stv.push(val);
    }
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        qv.push(val);
    }
    cout << StackAndQueue(n, stv, qv) << endl;

    return 0;
}