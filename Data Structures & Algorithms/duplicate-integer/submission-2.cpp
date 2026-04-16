class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)//go through the list
        {
            if (nums[i] == nums[i+1])//two next to each other are the same
            {
                return true;
            }
        }
        return false;
    }
};
