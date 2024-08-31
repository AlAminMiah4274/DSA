#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class Compare
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks < b.marks) // < desceding order, > ascending order
        {
            return true;
        }
        else if (a.marks > b.marks)
        {
            return false;
        }
        else
        {
            if (a.roll > b.roll)
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
        int roll, marks;
        cin >> name >> roll >> marks;
       
        Student x_students(name, roll, marks);
        p_queue.push(x_students);
    }

    while (!p_queue.empty())
    {
        cout << p_queue.top().name << " " << p_queue.top().roll << " " << p_queue.top().marks << endl;
        p_queue.pop();
    }

    return 0;
}