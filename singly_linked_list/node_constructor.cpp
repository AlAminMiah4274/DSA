#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

int main()
{
    Node alvarez(22), lautaro(24);

    alvarez.next = &lautaro;
    cout << alvarez.next->value << endl;

    return 0;
}