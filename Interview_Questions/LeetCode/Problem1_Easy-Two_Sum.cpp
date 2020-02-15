/*
We need to consider nums[i] and nums[j], where j = i+1.
i.e. ==> compares  (nums[i]+nums[j]==target)
This solution is really fast, just takes 148 ms, compared to general solution of 340ms
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        bool bFound = false;
        for(int i = 0; i<nums.size(); i++)
        {
            for(int j = i+1; j<nums.size(); j++)
            {
                if(nums[i]+nums[j]==target)
                {
                       indices.push_back(i);
                        indices.push_back(j);
                        bFound = true;
                        break;
                }
            }
            if(bFound)
                break;
        }
        return indices;     
    }
};
