class Solution 
{
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        for (int i = 0; i < nums.size(); i++)//take first element and compare to the rest
        {
            for (int j = i + 1; j < nums.size(); j++)//nested here, N^2
            {
                if (nums[i] == nums[j])
                {
                    return true;
                }
            }
        }
        return false;
    }
};
//S: O(1), constant vars
//T: O(n^2), nested loop
//hint2: sort first and compare elements that's next to each other => learned : C++, STD::vector has a build in sort function that has the T: O(n log n)
//how to get to O(n)?? => one pass => hint3: Hash table => what is HASH!


//[1, 3, 4, 5, 6] size : 5
//-0  1  2  3  4 -