#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> numbers = {45, 78, 97, 15, 31, 10};
    auto it = find(numbers.begin(), numbers.end(), 10);

    if (it != numbers.end())
    {
        cout << "Found" << endl;
    }
    else 
    {
        cout << "Not Found" << endl;
    }

    return 0;
}