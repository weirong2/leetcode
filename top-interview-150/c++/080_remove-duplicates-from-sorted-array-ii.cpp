class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() >= 3) {
            for (int i=nums.size()-1; i>=2; i--) {
                if (nums[i] == nums[i-1] & nums[i-1] == nums[i-2]) {
                    nums.erase(nums.begin() + i);
                }
            }
        }
        return nums.size();
    }
};