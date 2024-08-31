#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sentence;
    getline(cin, sentence);

    stringstream ss(sentence);
    string words;

    map<string, int> count_word;
    while (ss >> words)
    {
        count_word[words]++;
    }

    for (auto it = count_word.begin(); it != count_word.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}