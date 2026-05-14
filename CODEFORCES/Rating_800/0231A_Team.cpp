#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n][3];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < 3; j++)
            cin >> array[i][j];       

    int result = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < 3; j++)
            count += array[i][j];
        if (count >= 2) result++;
    }
    
    cout << result;

    return 0;
}