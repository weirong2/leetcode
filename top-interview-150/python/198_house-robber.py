class Solution:
    def rob(self, nums: List[int]) -> int:
        dp = [0] * len(nums)
        #print(dp)
        dp[0] = nums[0]
        for i in range(1, len(nums)):
            #print(i)
            dp[i] = max(dp[i-2]+nums[i], dp[i-1])
        #print(dp)
        return max(dp)