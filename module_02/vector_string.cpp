#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // vector<string> v;
    // for(int i = 0; i < n; i++)
    // {
    //     string s;
    //     cin >> s;
    //     v.push_back(s);
    
    // }
    // for(string s : v){
    // cout << s << endl;
    // }
    int n;
    cin >> n;
    cin.ignore();
    vector<string> v(n);
    for(int i = 0; i < n; i++){
    getline(cin, v[i]);
    }
    for(string s : v){
    cout << s << endl;
    }
    return 0;
}