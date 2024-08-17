#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        if (l.size() == 0)
            return true;
        else
            return false;
    }
};

class myQueue
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin >> N >> M;
    if (!(N == M))
    {
        cout << "NO" << endl;
        return 0;
    }

    myStack stv;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        stv.push(x);
    }

    myQueue qv;
    for (int i = 0; i < M; i++)
    {
        int x;
        cin >> x;
        qv.push(x);
    }

    while (!stv.empty())
    {
        if (!(stv.top() == qv.front()))
        {
            cout << "NO" << endl;
            return 0;
        }
        else
        {
            stv.pop();
            qv.pop();
        }
    }
    cout << "YES" << endl;
    return 0;
}