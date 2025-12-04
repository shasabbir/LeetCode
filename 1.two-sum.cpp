/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */
#include <vector>
#include <algorithm>
using namespace std;

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> arr;
        arr.reserve(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end());

        int left = 0;
        int right = static_cast<int>(arr.size()) - 1;
        while (left < right) {
            long long sum = static_cast<long long>(arr[left].first) + arr[right].first;
            if (sum == target) {
                return {arr[left].second, arr[right].second};
            }
            if (sum < target) {
                ++left;
            } else {
                --right;
            }
        }

        return {};
    }
};
// @lc code=end

