/*
 * @lc app=leetcode id=18 lang=cpp
 *
 * [18] 4Sum
 */
#include <vector>
#include <algorithm>
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {

       vector<vector<int>> result;

        // sort
        sort(nums.begin(), nums.end());

        for (int j = 0; j < nums.size() - 3; j++) {
            if (j > 0 && nums[j] == nums[j - 1])
                    continue; // skip duplicates
            for (int i = j + 1; i < nums.size() - 2; i++) {
                if (i > j+1 && nums[i] == nums[i - 1])
                    continue; // skip duplicates
                int right = nums.size() - 1, left = i + 1;
                while (right > left) {
                    long long sum =
                        (long long)nums[j] + nums[i] + nums[right] + nums[left];
                    if (sum < target) {
                        left++;
                    } else if (sum > target) {
                        right--;
                    } else {
                        result.push_back(
                            {nums[j], nums[i], nums[left], nums[right]});
                        while (left < right && nums[left] == nums[left + 1])
                            left++;
                        while (left < right && nums[right] == nums[right - 1])
                            right--;
                        left++;
                        right--;
                    }
                }
            }
        }
        return result;
    }
};
// @lc code=end
