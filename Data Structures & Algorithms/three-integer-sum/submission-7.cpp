class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {//[-1,0,1,2,-1,-4]
        sort(nums.begin(), nums.end()); //1. sort vector => [-4, -1, -1, 0, 1, 2]
        vector<vector<int>> res {};

        for (int i {0}; i < nums.size(); i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])//check duplicate nums[i] => but why i - 1, not i + 1?? ==> it's checking the previous i => if we already processed the same first num
            continue;

            int lP { i + 1};
            int rP { nums.size() -1 };

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

                    while (nums[lP] == nums[lP - 1] && lP < rP)
                    {
                        ++lP;
                    }
                    while (nums[rP] == nums[rP + 1] && lP < rP)
                    {
                        --rP;
                    }
                }
            }
        }
        return res;
    }
};
