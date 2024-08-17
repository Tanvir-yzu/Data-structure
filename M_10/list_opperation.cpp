#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    list<int> myList = {20,10, 40, 30, 10, 50};
    //myList.remove(10);
    //myList.sort( greater<int>() );
    //myList.sort(  );
    //myList.unique(  );
    myList.reverse();
    for (int val : myList)
    {
        cout << val << endl;
    }

    return 0;
}