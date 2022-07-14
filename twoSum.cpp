#include <iostream>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m ;
        
        for(int i = 0 ;i < nums.size(); i++){
            if(m.count(target - nums[i]))
                return {i,m[nums[i] - target]} ;
            
            m[nums[i]] = i ;
        }
        
        return {} ;
    }
};