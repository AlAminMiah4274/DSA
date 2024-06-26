#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* -------- With Size ------- */

    // int n;
    // cin >> n;

    // vector<string> friends_name(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> friends_name[i];
    // }

    // for (string text : friends_name)
    // {
    //     cout << text << endl;
    // }

    /* ---------- Without Size --------- */

    int n;
    cin >> n;

    vector<string> names;
    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        names.push_back(name);
    }

    for (int i = 0; i < names.size(); i++)
    {
        cout << names[i] << endl;
    }

    return 0;
}