#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text;
    cin >> text;

    vector<int> counting_arr(26, 0);
    for (auto it = text.begin(); it < text.end(); it++)
    {
        int letter = *it - 'a';
        counting_arr[letter]++;
    }

    for (int i = 0; i < counting_arr.size(); i++)
    {
        if (counting_arr[i] != 0)
        {
            cout << char(i + 'a') << " " << ":" << " " << counting_arr[i] << endl;
        }
    }

    return 0;
}