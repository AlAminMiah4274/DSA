/*
Given two strings s and t, return true if they are equal when both are typed into empty text editors.
'#' means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

 

Example 1:
Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: Both s and t become "ac".

Example 2:
Input: s = "ab##", t = "c#d#"
Output: true
Explanation: Both s and t become "".

Example 3:
Input: s = "a#c", t = "b"
Output: false
Explanation: s becomes "c" while t becomes "b".
 

Constraints:
1 <= s.length, t.length <= 200
s and t only contain lowercase letters and '#' characters.

Follow up: Can you solve it in O(n) time and O(1) space?
*/

/*
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s_stack, t_stack;
        for (char c : s)
        {
            if (c == '#')
            {
                if (!s_stack.empty()) s_stack.pop();
            }
            else 
            {
                s_stack.push(c);
            }
        }

        for (char c : t)
        {
            if (c == '#')
            {
                if (!t_stack.empty()) t_stack.pop();
            }
            else 
            {
                t_stack.push(c);
            }
        }
        return s_stack == t_stack;
    }
};
*/