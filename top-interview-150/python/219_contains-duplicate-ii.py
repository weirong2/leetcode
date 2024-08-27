class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        nums_len = len(nums)
        tmp = {}
        for i in range(nums_len):
            if nums[i] in tmp:
                if abs(tmp[nums[i]] - i) <= k:
                    return True
            tmp[nums[i]] = i
        return False