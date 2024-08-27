class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        nums_size = len(nums)
        k = k % nums_size
        if k !=0 or k != nums_size:
            tmp = nums[:(nums_size-k)]
            nums[:k-1] = nums[(nums_size-k):]
            nums[k:] = tmp
