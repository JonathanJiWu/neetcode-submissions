class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int lp {0};
        int rp {numbers.size() -1};//last elemt

        while (numbers[lp] < numbers[rp])
        {
            int currentSum { numbers[lp] + numbers[rp] };

            if (currentSum < target)
            {
                ++lp;
            }
            else if (currentSum > target)
            {
                --rp;
            }
            else
            {
                return {lp + 1, rp +1};
            }

        }
        return {};
        
    }
};
