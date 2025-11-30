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
        vector<vector<int,int>> result;
        for(int i=0;i<nums.size();i++){
            arr.push_back({nums[i],i});
        }
        //sort
        sort(arr.begin(), arr.end());
for(int i=0;i<nums.size()-3;i++){
        int right=nums.size()-1,left=0;
    while(right>left){
        long long sum=(long long)arr[i].first+arr[right].first+arr[left].first;
        if(sum<target){
            left++;
        }
       else if(sum>target){
            right--;
        }
        else{
            return {arr[left].second,arr[right].second};
        }
    }}
    return {};
    }
};
// @lc code=end

