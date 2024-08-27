class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n_size = nums.size();
        if (n_size == 1) return nums[0];
        sort(nums.begin(), nums.end());
        if (nums[0] != nums[1]) return nums[0];
        if (nums[n_size-1] != nums[n_size-2]) return nums[n_size-1];
        for (int i=1; i<nums.size()-1; i++) {
            if (nums[i-1] != nums[i] && nums[i] != nums[i+1]) return nums[i];
        }
        return 0;
    }
};