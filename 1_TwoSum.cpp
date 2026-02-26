#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;

        for (int i=0; i<nums.size(); i++) {
            int num=nums[i];
            int need=target-num;

            if (mp.find(need) !=mp.end()) {
                return{mp[need], i};
            }
            mp[num]=i;
        }
        return {};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 2, 4};
    int target = 6;
    
    vector<int> result = sol.twoSum(nums, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

}