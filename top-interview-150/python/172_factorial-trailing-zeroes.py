class Solution:
    def trailingZeroes(self, n: int) -> int:
        ret, x = 0, 1
        while True:
            tmp = int(n / pow(5, x))
            print("tmp:", tmp)
            if tmp < 1:
                break
            ret += tmp
            x += 1
            print("ret:", ret)
        return ret