class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        numbers_len = len(numbers)
        l,r = 0,numbers_len-1
        while(l<r):
            if numbers[l] + numbers[r] == target: return [l+1, r+1]
            if numbers[l] + numbers[r-1] == target: return [l+1, r]
            if numbers[l+1] + numbers[r] == target: return [l+2, r+1]
            if numbers[l] + numbers[r-1] > target:
                r -= 1
            elif numbers[l+1] + numbers[l] < target:
                l += 1
        return [l+1, r+1]