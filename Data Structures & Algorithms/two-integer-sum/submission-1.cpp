#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        //([3,4,5,6], target = 7) => 3 + 4 => [0, 1]

        // A: BRUTE, two loops, hold on to one item, check all other, if no hit, move on; once hit the target return the 
        // for (int i = 0; i < nums.size(); i++)
        // {
        //     for (int j = i + 1; i < nums.size(); j++)
        //     {
        //         if (nums[i] + nums[j] == target) { return {i, j};}//j + i = target 
        //     }
        // }
        // return {};

        //B: HASHMAP, check if the item can make up the sum of target with anything in the map, if yes, return the one in the map
        //and the current item's index, if not insert items into this hashmap

        std::unordered_map<int, int> hashMap;//key: index, value: item value => mistake here: key value should be flipped
        //it it IMPOSSIBLE to search if a value exist in a map, but you can search all the keys with O(1)

        for (int i = 0; i < nums.size(); i++)
        {
            if (hashMap.find(target - nums[i]) != hashMap.end())//this item makes a target with anything that's in the map
            {
                return {hashMap[target - nums[i]], i};//how to find the key of known value in a unordered_map?

            }
            else//not the wanted pair
            {
                hashMap[nums[i]] = i;//add into the map, 
            }

        }
    }
};
