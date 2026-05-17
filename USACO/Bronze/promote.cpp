// problem: Promotion Counting

#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);

    int array[4][2];
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 2; j++)
            cin >> array[i][j];

    int l1 = 0, l2 = 0, l3 = 0;

    for (int i = 0; i < 4; i++)
        for (int j = 1; j < 2; j++)
        {
            int diff = array[i][j] - array[i][j - 1];
            if (diff && i == 1)
                l1 += diff;
            else if (diff && i == 2)
            {
                l1 += diff;
                l2 += diff;
            }
            else if (diff && i == 3)
            {
                l1 += diff;
                l2 += diff;
                l3 += diff;
            }
        }

    cout << l1 << endl;
    cout << l2 << endl;
    cout << l3 << endl;

    return 0;
}