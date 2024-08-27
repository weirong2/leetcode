class Solution:
    def climbStairs(self, n: int) -> int:
        t1, t2, nextTerm = 0, 1, 0
        if n==1:
            return 1
        if n==2:
            return 2
        for i in range(1, n+1):
            nextTerm = t1 + t2
            t1 = t2
            t2 = nextTerm
        return nextTerm
