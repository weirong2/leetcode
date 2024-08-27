class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int s = nums.size();
        if (s > 1) {
            int threshold = s / 2;
            sort(nums.begin(), nums.end());
            int this_v = nums[0];
            int this_c = 1;
            for (int i=1; i<s; i++) {
                if (nums[i] == this_v) {
                    this_c++;
                    if (this_c > threshold) break;
                }
                else {
                    this_v = nums[i];
                    this_c = 1;
                }
            }
            return this_v;
        }
        else {
            return nums[0];
        }
    }
};