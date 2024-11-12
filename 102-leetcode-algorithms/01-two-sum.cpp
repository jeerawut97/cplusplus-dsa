#include<iostream>
#include<vector>

using namespace std;

void algorBruteForce(vector<int> nums, int target) {
    string result = "Don't Pass\n";
    cout  << "Algorithm 1\n";
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j  < nums.size(); j++) {
            if (nums[j] == target - nums[i]) {
                result = "Pass\n";
            }
        }
    }
    cout << result;
}

void test(vector<int> nums, int target) {
    algorBruteForce(nums, target);
}

int main() {
    /*
        Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
        You may assume that each input would have exactly one solution, and you may not use the same element twice.
        You can return the answer in any order.

        Example 1:
        Input: nums = [2,7,11,15], target = 9
        Output: [0,1]
        Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

        Example 2:
        Input: nums = [3,2,4], target = 6
        Output: [1,2]

        Example 3:
        Input: nums = [3,3], target = 6
        Output: [0,1]

        Example 3:
        Input: nums = [3,2,3], target = 6
        Output: [0,2]

        (nums[j] == target - nums[i])

        Constraints:
        2 <= nums.length <= 104
        -109 <= nums[i] <= 109
        -109 <= target <= 109
        Only one valid answer exists.

        Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?
    */

    std::vector<int> nums1 = {2, 7, 11, 15};
    std::vector<int> nums2 = {3, 2, 4};
    std::vector<int> nums3 = {3, 3};
    std::vector<int> nums4 = {3, 2, 3};

    test(nums1, 9);
    test(nums2, 6);
    test(nums3, 6);
    test(nums4, 6);
    return 0;
}
