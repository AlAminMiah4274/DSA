/*
Problem statement
You are given a stack/deque of integers 'MY-STACK' and an integer ‘X’. 
Your task is to insert ‘X’ to the bottom of ‘MY-STACK’ and return the updated stack/deque.

Note :
If ‘MY_STACK’ = [7, 1, 4, 5], then the first element represents the element at the bottom of the stack 
and the last element represents the element at the top of the stack.

For Example :
Let ‘MY_STACK’ = [7, 1, 4, 5] and ‘X’ = 9. So, ‘MY_STACK’ after insertion becomes [9, 7, 1, 4, 5].

Follow Up :
Try to do this without using any other data structure.

Constraints :
1 <= T <=100
1 <= N <= 10^4
0 <= 'X’ and 'MY_STACK[i]’ <= 10^5
*/

/*
#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    stack<int> mainStack;
    while (!myStack.empty())
    {
        // int stack_value = myStack.top();
        mainStack.push(myStack.top());
        myStack.pop();
    }
    mainStack.push(x);

    while (!mainStack.empty())
    {
        myStack.push(mainStack.top());
        mainStack.pop();
    }
    return myStack;
}
*/