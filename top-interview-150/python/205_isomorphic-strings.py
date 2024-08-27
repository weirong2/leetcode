class Solution:
    def strListToNumList(self, s: list) -> list:
        tmp = []
        for i in range(0, len(s)):
            if s[i] not in tmp:
                tmp.append(s[i])
        #print("tmp:", tmp)
        for i in range(0, len(tmp)):
            x = 0
            while x < len(s):
                if s[x] == tmp[i]:
                    s[x] = str(i)
                x += 1
        #print("s:", s)
        return s

    def isIsomorphic(self, s: str, t: str) -> bool:
        lp = [*s]
        #print(lp)
        ls = [*t]
        #print(ls)
        if len(lp) != len(ls):
            return False
        ret1 = self.strListToNumList(lp)
        ret2 = self.strListToNumList(ls)
        for i in range(0, len(ret1)):
            if ret1[i] != ret2[i]:
                return False
        return True
