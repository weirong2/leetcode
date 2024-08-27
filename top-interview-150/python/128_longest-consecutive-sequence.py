class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        ret, i, c = 0, 0, 1
        nums = sorted(set(nums))
        nums_len = len(nums)
        if nums_len == 0:
            return 0
        if nums_len == 1:
            return 1
        #print(nums)
        while(i<nums_len-1):
            if nums[i] + 1 == nums[i+1]:
                c += 1
            else:
                c = 1
            ret = max(ret, c)
            i += 1
        return ret