class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        sList = []

        for i, num in enumerate(nums):
            sList.append([num, i])

        sList.sort()

        i, j = 0, len(nums) - 1
        while i < j:
            if sList[i][0] + sList[j][0] == target:
                return [
                    min(sList[i][1], sList[j][1]),
                    max(sList[i][1], sList[j][1])
                ]
            elif sList[i][0] + sList[j][0] < target:
                i += 1
            else:
                j -=1

        return []
        