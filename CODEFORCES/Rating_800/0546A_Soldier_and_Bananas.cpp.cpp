#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w; //k: the cost of the first banana | n: the amount of money that solder has | w: the amount of banana that he wants
    int cost = 0;

    cin >> k >> n >> w;

    for (int i = 1; i <= w; i++)
        cost += k * i;

    cout << (cost >= n ? cost - n : 0);

    return 0;
}