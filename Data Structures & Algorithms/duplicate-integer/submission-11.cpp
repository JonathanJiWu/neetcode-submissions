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

        //2. sort and check, S: O(1)
        // std::sort(nums.begin(), nums.end());//sort the vector, O(logN)
        // for (int i = 0; i < nums.size(); i++)//O(N)
        // {
        //     if (nums[i] == nums[i + 1]) 
        //     {
        //         return true;
        //     };
        // }//check the two data points that's right next to each other
        // return false;

        //3. hashset, S: O(N), T: O(N)
        // std::unordered_set<int> set;
        // for (int i = 0; i < nums.size(); i++)//O(N)
        // {
        //     //if (set.contains(nums[i]))//check if already in the set => contains()is C++20
        //     if (set.count(nums[i]))
        //     {
        //         return true;
        //     }
        //     else
        //     {
        //         set.insert(nums[i]);//add to the set 
        //     }
        // }
        // return false;

        //4. hash set length vs vector length, S: O(n), T: O(n)
        std::unordered_set<int> setOfNums(nums.begin(), nums.end());//put all elements into a hashset, hashset only takes unique values
        if (setOfNums.size() != nums.size()){return true;}
        else {return false;}
        //compare the set and vector's size, no duplicates if they are the same
    }
};
