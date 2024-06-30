#include <bits/stdc++.h>
using namespace std;

class Node 
{
public:
    int value;
    Node *next;
};

int main()
{
    Node alvarez, lautaro;
    alvarez.value = 1;
    alvarez.next = &lautaro;

    lautaro.value = 4;
    lautaro.next = NULL;

    // cout << "Goal: " << alvarez.value << endl;
    // cout << "Goal: " << lautaro.value << endl;
    cout << alvarez.next->value << endl;
    return 0;
}