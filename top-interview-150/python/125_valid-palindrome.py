class Solution:
    def isPalindrome(self, s: str) -> bool:
        #print(s)
        import re, string
        s = re.sub('[\W_]+', '', s)
        s = s.lower()
        #print(s)
        length = len(s)
        bar = int(length / 2)
        #print(bar)
        for i in range(0, bar):
            #print(i)
            if s[i] != s[length-i-1]:
                return False
        return True
        