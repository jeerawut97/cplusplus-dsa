#include<iostream>
#include<vector>
#include<unordered_map>
#include <stack>

using namespace std;

bool test(string s) {
    stack<char> stk;
    
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            stk.push(c);
        } else {
            if (stk.empty()) return false;
            char top = stk.top();
            stk.pop();
            if ((c == ')' && top != '(') || 
                (c == '}' && top != '{') || 
                (c == ']' && top != '[')) {
                return false;
            }
        }
    }

    return stk.empty();
}

int main() {
    /*
        Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
        An input string is valid if:
        Open brackets must be closed by the same type of brackets.
        Open brackets must be closed in the correct order.
        Every close bracket has a corresponding open bracket of the same type.

        Example 1:
        Input: s = "()"
        Output: true

        Example 2:
        Input: s = "()[]{}"
        Output: true

        Example 3:
        Input: s = "(]"
        Output: false

        Example 4:
        Input: s = "([])"
        Output: true

        Example 5:
        Input: s = "({{{{}}}))"
        Output: false

        Constraints:
        1 <= s.length <= 104
        s consists of parentheses only '()[]{}'.
    */

    cout << test("()") << "\n";
    cout << test("()[]{}") << "\n";
    cout << test("(]") << "\n";
    cout << test("([])") << "\n";
    cout << test("({{{{}}}))") << "\n";

    return 0;
}
