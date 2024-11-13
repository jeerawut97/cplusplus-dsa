#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

bool test(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) return false;

    int ans = 0;
    while (x > ans) {
        int digit = x% 10;
        ans = ans * 10 + digit;
        x /= 10;
    }

    return x == ans || x == ans / 10;
}

int main() {
    /*
        Given an integer x, return true if x is a palindrome, and false otherwise.

        Example 1:
        Input: x = 121
        Output: true
        Explanation: 121 reads as 121 from left to right and from right to left.

        Example 2:
        Input: x = -121
        Output: false
        Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

        Example 3:
        Input: x = 10
        Output: false
        Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

        Constraints:
        -231 <= x <= 231 - 1

        Follow up: Could you solve it without converting the integer to a string?
    */

    cout << test(121) << "\n";
    cout << test(-121) << "\n";
    cout << test(10) << "\n";
    cout << test(10001) << "\n";
    return 0;
}
