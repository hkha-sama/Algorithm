#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);

    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int walk = abs(a - b);
    int tele1 = min(abs(a - x), abs(a - y));
    int tele2 = min(abs(b - x), abs(b - y));
    int totaltele = tele1 + tele2;

    cout << min(walk, tele1 + tele2);

    return 0;
}