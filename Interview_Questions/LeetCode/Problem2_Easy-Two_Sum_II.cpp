/*
trick is num[0] is min element, num[n] is max element, where n is the last element index. 
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0, j=nums.size()-1;
        while(i<j)
        {
            if(nums[i]+nums[j]>target)
                j--;
            else if(nums[i]+nums[j]<target)
                i++;
            else
                return {i+1,j+1};
        }
    return {};
    }
    
};