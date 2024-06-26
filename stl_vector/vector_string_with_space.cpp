#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // cin.ignore();

    // vector<string> names;
    // for (int i = 0; i < n; i++)
    // {
    //     string name;
    //     getline(cin, name);
    //     names.push_back(name);
    // }

    // for (int i = 0; i < names.size(); i++)
    // {
    //     cout << names[i] << endl;
    // }

    int n;
    cin >> n;
    cin.ignore();

    vector<string> names(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin, names[i]);
    }

    for (string text : names)
    {
        cout << text << endl;
    }

    return 0;
}