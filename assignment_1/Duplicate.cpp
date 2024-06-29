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

    bool flag = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (numbers[i] == numbers[j])
            {
                flag = true;
                break;
            }
        }
    }

    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }

    return 0;
}