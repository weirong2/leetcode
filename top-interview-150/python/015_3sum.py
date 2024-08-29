class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        ret = []
        nums_len = len(nums)
        nums_sorted = sorted(nums)
        for i in range(nums_len):
            if i>0 and nums_sorted[i] == nums_sorted[i-1]: continue
            j, k = i+1, nums_len-1
            while(j<k):
                tmp_sum = nums_sorted[i]+nums_sorted[j]+nums_sorted[k]
                if tmp_sum < 0:
                    j+=1
                elif tmp_sum > 0:
                    k-=1
                else:
                    ret.append([nums_sorted[i], nums_sorted[j], nums_sorted[k]])
                    j+=1
                    while(nums_sorted[j]==nums_sorted[j-1] and j<k):
                        j+=1
        return ret

class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        ret = []
        nums.sort()
        for i, a in enumerate(nums):
            if i > 0 and a == nums[i-1]:
                continue

            l, r = i+1, len(nums)-1
            while l < r:
                threeSum = a + nums[l] + nums[r]
                if threeSum > 0:
                    r -= 1
                elif threeSum < 0:
                    l += 1
                else:
                    ret.append([a, nums[l], nums[r]])
                    l += 1
                    while nums[l] == nums[l-1] and l<r:
                        l += 1
        return ret
        