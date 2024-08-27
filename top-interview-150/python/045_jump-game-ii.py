class Solution:
    def jump(self, nums: List[int]) -> int:
        ret, index = 0, 0
        if len(nums) == 1:
            return 0
        while (index < len(nums)-1):
            if nums[index] == 0:
                break
            candidate = nums[index: index+nums[index]+1]
            #print("candidate:", candidate)
            if index + len(candidate) >= len(nums):
                ret += 1
                break
            tmp_max, tmp_i = candidate[0], 0
            for i, v in enumerate(candidate):
                #print(i,v)
                if i + v > tmp_max:
                    tmp_max, tmp_i, tmp_v = i + v, i, v
            #print("tmp_max", tmp_max)
            #print("tmp_i", tmp_i)
            index = index+tmp_v if tmp_i == 0 else index+tmp_i 
            #print("index:", index)
            ret += 1
            #print(ret)
        return ret