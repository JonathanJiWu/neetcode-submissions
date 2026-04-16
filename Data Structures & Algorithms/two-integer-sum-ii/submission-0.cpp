class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int leftPointer {0};
        int rightPointer { numbers.size() - 1 };

        while (leftPointer < rightPointer)
        {
            int currentSum = numbers[leftPointer] + numbers[rightPointer];

            if (currentSum > target)//too large
            {
                --rightPointer;

            }
            else if (currentSum < target) // too small
            {
                ++leftPointer;
            }
            else
            {
                return {leftPointer + 1, rightPointer + 1};//1-indexed
            }
        }
        return {};
    }
};
