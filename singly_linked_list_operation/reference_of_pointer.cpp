#include <bits/stdc++.h>
using namespace std;

void ptr_value(int *&p)
{
    p = NULL;
}

int main()
{
    int value = 105;
    int *ptr = &value;

    ptr_value(ptr);

    cout << value << endl;
    cout << *ptr << endl;

    return 0;
}