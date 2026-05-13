#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w;
    cin >> w;
    int array[w];
    for (int i = 1; i <= w; i++)
        array[i] = i;

    for (int i = 1; i <= w; i++)
        for (int j = 1; j <= w; j++)
            if (i % 2 == 0 && j % 2 == 0 && i + j == w)
            {
                cout << "YES";
                return 0;
            }

    cout << "NO";
    return 0;
}