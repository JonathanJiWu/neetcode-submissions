class Solution 
{
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        //1. brute force
        //for (int i = 0; i < nums.size(); i++)//data point #1
        //{
        //    for (int j = i + 1; j < nums.size(); j++)//data point #2
        //    {
        //       if (nums[i] == nums[j])
        //        {
        //            return true;
        //        }
        //    }
        // }
        //return false;

        //2. sort and check
        std::sort(nums.begin(), nums.end());//sort the vector
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == nums[i + 1]) 
            {
                return true;
            };
        }//check the two data points that's right next to each other
        return false;
    }
};
