#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int value_int;

    Person(string name, int value_int)
    {
        this->name = name;
        this->value_int = value_int;
    }
};

class Compare
{
public:

    bool operator()(Person a, Person b)
    {
        if (a.name > b.name)
        {
            return true;
        }
        else if (a.name < b.name)
        {
            return false;
        }
        else 
        {
            if (a.value_int < b.value_int)
            {
                return true;
            }
            else 
            {
                return false;
            }
        }
    }
};

int main()
{
    // to avoid run time error
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    priority_queue<Person, vector<Person>, Compare> p_queue;
    while (n--)
    {
        string name;
        int age;
        cin >> name >> age;

        Person friends(name, age);
        p_queue.push(friends);
    }

    while (!p_queue.empty())
    {
        cout << p_queue.top().name << " " << p_queue.top().value_int << endl;
        p_queue.pop();
    }

    return 0;
}