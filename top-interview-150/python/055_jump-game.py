class Solution:
    def canJump(self, nums: List[int]) -> bool:
        maxRight = 0
        for i in range(len(nums)):
            if maxRight >= i:
                maxRight = max(maxRight, nums[i]+i)
            if maxRight >= len(nums)-1:
                return True
        return False
        