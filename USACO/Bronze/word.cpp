#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);
    int N, K;
    cin >> N >> K;

    int count = 0;
    for (int i = 0; i < N; i++)
    {
        string word;
        cin >> word;
        if (count + word.length() <= K)
        {
            if (count > 0)
                cout << " ";
            cout << word;
            count += word.length();
        }
        else
        {
            cout << "\n"
                 << word;
            count = word.length();
        }
    }

    return 0;
}