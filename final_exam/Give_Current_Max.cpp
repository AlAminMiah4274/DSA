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
        if (a.marks < b.marks)
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

    priority_queue<Student, vector<Student>, Compare> students_info;
    while (n--)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;

        Student class_x(name, roll, marks);
        students_info.push(class_x);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int val;
        cin >> val;

        if (val == 0)
        {
            // take input
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;

            Student class_x(name, roll, marks);
            students_info.push(class_x);

            if (!students_info.empty())
            {
                cout << students_info.top().name << " " << students_info.top().roll
                     << " " << students_info.top().marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        if (val == 1)
        {
            // print the value
            if (!students_info.empty())
            {
                cout << students_info.top().name << " " << students_info.top().roll
                     << " " << students_info.top().marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        if (val == 2)
        {
            // delete the value
            if (!students_info.empty())
            {
                students_info.pop();
            }

            if (!students_info.empty())
            {
                cout << students_info.top().name << " " << students_info.top().roll
                     << " " << students_info.top().marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}