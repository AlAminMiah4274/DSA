#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;

    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }

    // int string_value()
    // {
    //     int sum = 0;
    //     for (char c : name)
    //     {
    //         int val = int(c);
    //         sum += val;
    //     }

    //     return sum;
    // }
};

class Compare
{
public:
    int string_value(string name)
    {
        int sum = 0;
        for (char c : name)
        {
            int val = int(c);
            sum += val;
        }

        return sum;
    }

    bool operator()(Student a, Student b)
    {

        if (string_value(a.name) > string_value(b.name)) // < desceding order, > ascending order
        {
            return true;
        }
        else if (string_value(a.name) < string_value(b.name))
        {
            return false;
        }
        else
        {
            if (a.roll < b.roll)
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
    int n;
    cin >> n;

    priority_queue<Student, vector<Student>, Compare> p_queue;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll;
        cin >> name >> roll;

        Student x_students(name, roll);
        p_queue.push(x_students);
    }

    while (!p_queue.empty())
    {
        cout << p_queue.top().name << " " << p_queue.top().roll << endl;
        p_queue.pop();
    }

    return 0;
}