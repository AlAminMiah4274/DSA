#include <bits/stdc++.h>
using namespace std;

int main()
{
    // assign(): ----->

    // vector<int> numbers = {10, 20, 30, 40};
    // vector<int> num = {1, 2, 3};
    // num = numbers;

    // for (int i = 0; i < num.size(); i++)
    // {
    //     cout << num[i] << " ";
    // }

    // pop_back(): ------>

    vector<int> numbers = {40, 10, 30, 20, 50};
    numbers.pop_back();
    numbers.pop_back();

    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}