// Problem: Word Processor

#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);

    int N = 0, K = 0;
    cin >> N >> K;

    cin.ignore();
    string s = "";
    getline(cin, s);
    stringstream ss(s);
    string word;
    vector<string> words;
    while (ss >> word)
        words.push_back(word);

    int count = 0;
    for (int i = 0; i < words.size(); i++)
    {
        int size = words[i].length() + count;
        if (size > K)
        {
            if (words[i].length() <= K)
                cout << words[i] << " ";
            else
                count = 0;
        }
        else if (size == K)
        {
            cout << words[i] << endl;
        }
        else
        {
            cout << words[i] << " ";
            count += words[i].length();
        }
    }

    return 0;
}
