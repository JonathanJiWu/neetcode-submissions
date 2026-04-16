class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dictOfInts = {}

        for i in range(len(nums)):
            complement = target - nums[i]
            if complement in dictOfInts:
                return [dictOfInts[complement], i]
            dictOfInts[nums[i]] = i

        return []

    


        