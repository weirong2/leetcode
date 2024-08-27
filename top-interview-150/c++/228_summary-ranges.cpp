class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int i = 0, p = 1, j = 0, n = nums.size();
        while (j < n)
        {
            while (p < n && nums[i] + 1 == nums[p])
            {
                p++;
                i++;
            }
            ans.push_back(j != i ? to_string(nums[j]) + "->" + to_string(nums[i]) : to_string(nums[j]));
            j = p;
            i = p;
            p++;
        }
        return ans;
    }
};