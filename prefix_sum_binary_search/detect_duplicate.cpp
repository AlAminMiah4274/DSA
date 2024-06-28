#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    int x;
    cin >> x;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] == x)
        {
            count++;
        }
    }

    if(count > 1)
    {
        cout << "true" << endl;
    }
    else 
    {
        cout << "false" << endl;
    }

    return 0;
}