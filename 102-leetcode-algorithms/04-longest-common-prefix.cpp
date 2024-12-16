#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

string test(vector<string> strs) {
    if (strs.empty()) return "";
    string prefix = strs[0];
    for (string s : strs)
        while (s.find(prefix) != 0)
            prefix = prefix.substr(0, prefix.length() - 1);
    return prefix;
}

int main() {
    /*
        Write a function to find the longest common prefix string amongst an array of strings.
        If there is no common prefix, return an empty string "".
        Example 1:
        Input: strs = ["flower","flow","flight"]
        Output: "fl"

        Example 2:
        Input: strs = ["dog","racecar","car"]
        Output: ""
        Explanation: There is no common prefix among the input strings.

        Constraints:
        1 <= strs.length <= 200
        0 <= strs[i].length <= 200
        strs[i] consists of only lowercase English letters.
    */

    cout << test({"flower","flow","flight"}) << "\n";
    cout << test({"dog","racecar","car"}) << "\n";

    return 0;
}
