class Solution:
    def maxArea(self, height: List[int]) -> int:
        height_len = len(height)
        l, r = 0, height_len -1
        ret = min(height[l], height[r]) * (r-l)
        while (l < r):
            if (height[l] < height[r]):
                ret = max(ret, height[l] * (r-l))
                l += 1
            else:
                ret = max(ret, height[r] * (r-l))
                r -= 1
        return ret