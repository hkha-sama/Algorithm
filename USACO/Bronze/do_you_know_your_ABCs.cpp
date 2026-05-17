// Problem: Do you know your ABCs?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array[7];
    for (int i = 0; i < 7; i++)
        cin >> array[i];

    int A, B, C;

    sort(array, array + 7);

    A = array[0];
    B = array[1];

    C = array[6] - (A + B);

    cout << A << " " << B << " " << C;

    return 0;
}