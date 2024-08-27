class Solution:
    def hIndex(self, citations: List[int]) -> int:
        tmp = sorted([i for i in citations if i != 0], reverse=True)
        tmp_len = len(tmp)
        if tmp_len == 0:
            return 0
        i = tmp_len
        while(i>0):
            if all(x >= i for x in tmp[:i]):
                return i
            i -= 1
        return 0