class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res {};

        for (int i {0}; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1] && i > 0)
            {
                continue;
            }
                
            int lP {i + 1};
            int rP {nums.size() - 1};

            while (lP < rP)
            {
                int currentSum { nums[i] + nums[lP] + nums[rP]};

                if (currentSum > 0)
                {
                    --rP;
                }
                else if (currentSum < 0)
                {
                    ++lP;
                }
                else
                {
                    res.push_back({nums[i], nums[lP], nums[rP]});
                    ++lP;
                    --rP;

                    while ( nums[lP] == nums[lP - 1] && lP < rP)
                    {
                        ++lP;
                    }
                    while ( nums[rP] == nums[rP + 1] && lP < rP)
                    {
                        --rP;
                    }
                }
            }
        }
        return res;
    }
};
