// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int N;
//     cin >> N;

//     for (int i = 0; i < N; ++i)
//     {
//         for (int j = 0; j < N; ++j)
//         {
//             if (i == j && i == N / 2)
//             {
//                 cout << 'X';
//             }
//             else if (i == j)
//             {
//                 cout << '\\';
//             }
//             else if (i + j == N - 1)
//             {
//                 cout << '/';
//             }
//             else
//             {
//                 cout << ' ';
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i <= N / 2; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            cout << " ";
        }
        cout << "\\";
         for (int j = 0; j < N - 2 - 2 * i; ++j)
        {
             cout << " ";
            
        }
         if (i < N / 2)
        {
             cout << "/";
            
        }
        else
        {
            cout << "X";
           
        }
         cout << endl;
        
    }

     for (int i = N / 2 - 1; i >= 0; --i)
    {
         for (int j = 0; j < i; ++j)
        {
            cout << " ";
            
        }
         cout << "/";
         for (int j = 0; j < N - 2 - 2 * i; ++j)
        {
           cout << " ";
            
        }
        cout << "\\";
        cout << endl;
        
    }

     return 0;
}

