class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int nums_size = nums.size();
        if (k > nums_size) k = k % nums_size;
        if (k != 0 | k != nums_size) {
            vector<int> tail{nums.begin() + nums_size-k, nums.end()};
            nums.insert(nums.begin(), tail.begin(), tail.end());
            nums.erase(nums.end()-k, nums.end());
        }
    }
};