#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> numbers = {10, 20, 30, 40, 50, 60, 70};
    // numbers.erase(numbers.begin()+3);
    // numbers.erase(numbers.begin()+0, numbers.begin()+6);
    numbers.erase(numbers.begin()+0, numbers.end()-1);

    for (int element : numbers)
    {
        cout << element << " ";
    }

    return 0;
}