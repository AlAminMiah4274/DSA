#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    vector<string> text(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin, text[i]);
    }

    for (string element: text)
    {
        for(int i = 0; i < element.size(); i++)
        {
            if (element[0] >= 'a' && element[0] <= 'z')
            {
                element[0] = element[0] - 32;
            }
        }
        cout << element << endl;
    }

    return 0;
}