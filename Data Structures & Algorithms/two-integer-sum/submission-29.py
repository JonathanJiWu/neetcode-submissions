class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # 1. make a empty 2D list
        # 2. translate the nums into the 2D list, so [value, index], ...
        # IE: [3,4,5,6] => [[0, 3], ]
        # 3. Sort the 2D list(python sort by the first item of the multi-D lists)
        # NOTE: smaller index first
        # Q: how do we get to the finding value part? => go through the list
        # Q: what's the point of the 2D list? => to go through the list from 
        # both ends.
        # 4. go through the list from both end and find the two values that 
        # makes the target
        # 5. return the smaller index by check the index, value pairs

        listOfTaggedIndexValuePairs = []
        for i, num in enumerate(nums):
            listOfTaggedIndexValuePairs.append([num, i])

        listOfTaggedIndexValuePairs.sort() #sorted by vaules

        i, j = 0, len(nums) - 1
        while i < j: #two pointers
            if listOfTaggedIndexValuePairs[i][0] + listOfTaggedIndexValuePairs[j][0] == target:
                return [
                    min(listOfTaggedIndexValuePairs[i][1], listOfTaggedIndexValuePairs[j][1]), 
                    max(listOfTaggedIndexValuePairs[i][1], listOfTaggedIndexValuePairs[j][1])
                ]
            elif listOfTaggedIndexValuePairs[i][0] + listOfTaggedIndexValuePairs[j][0] < target:
                i += 1
            else:
                j-= 1


            


