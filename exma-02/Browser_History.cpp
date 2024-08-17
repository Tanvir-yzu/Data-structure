#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    list<string> dataList;
    string data;

    
    while (cin >> data && data != "end")
    {
        dataList.push_back(data);
    }

    int Q;
    cin >> Q;

    list<string>::iterator current = dataList.begin();

    while (Q--)
    {
        string com, target;
        cin >> com;

        if (com == "visit")
        {
            cin >> target;
            auto it = find(dataList.begin(), dataList.end(), target);
            if (it != dataList.end())
            {
                current = it;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (com == "next")
        {
            if (next(current) != dataList.end())
            {
                ++current;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (com == "prev")
        {
            if (current != dataList.begin())
            {
                --current;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}