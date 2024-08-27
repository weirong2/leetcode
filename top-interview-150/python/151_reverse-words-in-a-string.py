class Solution:
    def reverseWords(self, s: str) -> str:
        ret = ""
        l_s = s.split()
        i = len(l_s)-1
        while (i >= 0):
            ret += l_s[i] + " "
            i -= 1
        return ret.strip()