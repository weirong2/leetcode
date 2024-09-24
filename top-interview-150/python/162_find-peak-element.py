class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        if len(nums) <= 1:
            return 0
        if len(nums) == 2:
            return 0 if nums[0] > nums[1] else 1
        ret = 0
        len_nums = len(nums)
        for i in range(len_nums-1):
            if nums[i+1] < nums[i]:
                return i
        return len_nums -1