class Solution:
    def myPow(self, x: float, n: int) -> float:
        if n == 0:
            return 1
        if n % 2 == 0:
            tmp = self.myPow(x, n/2)
            return tmp*tmp
        if n < 0:
            return 1 / self.myPow(x, -n)
        return x * self.myPow(x, n-1)