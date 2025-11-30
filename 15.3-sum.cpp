/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */
#include <vector>
#include <algorithm>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        long long target=0;
        vector<vector<int>> result;
        
        //sort
        sort(nums.begin(), nums.end());
for(int i=0;i<nums.size()-2;i++){
    if(i>0 && nums[i]==nums[i-1]) continue; //skip duplicates
        int right=nums.size()-1,left=i+1;
    while(right>left){
        long long sum=(long long)nums[i]+nums[right]+nums[left];
        if(sum<target){
            left++;
        }
       else if(sum>target){
            right--;
        }
        else{
            result.push_back({nums[i],nums[left],nums[right]});
            while(left<right &&nums[left]==nums[left+1]) left++;
            while(left<right &&nums[right]==nums[right-1]) right--;
            left++;
            right--;
        }
    }}
    return result;
    }
};
// @lc code=end

