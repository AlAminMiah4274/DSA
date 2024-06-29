#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        int numbers[n];
        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
        }

        int flag = 1;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (numbers[i] > numbers[j])
                {
                    flag = 0;
                    break;
                }
            }
        }
        

        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}