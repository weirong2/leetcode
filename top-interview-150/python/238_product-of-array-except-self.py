class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        nums_len = len(nums)
        left = right = 1
        ret = [1] * nums_len
        for i in range(0, nums_len):
            ret[i] = left
            left *= nums[i]
        for i in range(nums_len-1,-1,-1):
            ret[i] *= right
            right *= nums[i]
        #print(ret)
        return ret