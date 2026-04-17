class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        dic =defaultDict(list)
        for s in strs:
            sortedS = ''.join(sorted(s))
            dic[sortedS].append(s)
        return list(dic.values())


        