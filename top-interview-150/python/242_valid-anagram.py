class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        ret = False
        #print(sorted([*s]))
        #print(sorted([*t]))
        if len(s) == len(t) and sorted([*s]) == sorted([*t]):
            ret = True
        return ret