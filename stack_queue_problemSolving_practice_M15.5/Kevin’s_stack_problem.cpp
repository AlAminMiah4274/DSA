/*
Problem statement:
Kevin has recently learned the concept of “STACK”.
During his practice, he got stuck in a problem
where he has to reverse a string ‘S’ using a stack.
So, he appoints you to help him in reversing the string ‘S’.
All you have to do is to find the reversed string.

Please reverse the string using a stack so that Kevin gets to know where he is getting wrong after seeing your solution.
It is guaranteed that strings will only be composed of English alphabets.
*/

/*
#include <bits/stdc++.h>
string kevinStackProblem(string &s)
{
    // Write your code here.
    stack<char> myStack;
    for (char c : s)
    {
        myStack.push(c);
    }
    string reversed;
    while (!myStack.empty())
    {
        reversed.push_back(myStack.top());
        myStack.pop();
    }

    return reversed;
}
*/