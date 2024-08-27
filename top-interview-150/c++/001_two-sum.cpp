class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret{};
        /* solution 1
        int nums_size = nums.size();
        for (int i=0; i<nums_size-1; i++) {
            for (int j=i+1; j<nums_size; j++) {
                if (nums[i]+nums[j]==target) {
                    ret.push_back(i);
                    ret.push_back(j);
                    return ret;
                }
            }
        }
        */
        /* solution 2 */
        int nums_size = nums.size();
        for (int i=0; i<nums_size-1; i++) {
            int diff = target - nums[i];
            vector<int> tmp{nums.begin()+i+1, nums.end()};
            auto pos = find(tmp.begin(), tmp.end(), diff);
            if (pos != tmp.end()) {
                ret.push_back(i);
                ret.push_back((pos-tmp.begin())+i+1);
                return ret;
            }
        }
        return ret;
    }
};