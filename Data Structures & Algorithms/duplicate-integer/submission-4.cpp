class Solution 
{
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        unordered_set<int> set;//init a hash set
        for (int num : nums)
        {
            if (set.count(num)) //not 0 => already existed
            {
                return true;
            };//chech if the value is already in the hashset, if yes, we have the duplicate
            set.insert(num);//if not add it to the set
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