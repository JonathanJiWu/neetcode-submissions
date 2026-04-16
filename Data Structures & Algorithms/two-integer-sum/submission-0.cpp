class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        //1. brute force, nested loop, O(n^2)
        //2. hashmap, O(n)
        std::map<int, int> hashMap;

        for (int i = 0; i < nums.size(); i++)
        {
            if (hashMap.count(target - nums[i]) != 0)//
            {
                return {hashMap[target - nums[i]], i};//{look up the key by the value => turns out, you can't do it with maps, can only lookup value with key, but other way around}
                // => filp the key, value pair
            }
            else 
            {
                hashMap[nums[i]] = i;//add index, value pair
            }
                //check if anything in the map is the complation of the target

        } 
        return {};
        
    }
};
