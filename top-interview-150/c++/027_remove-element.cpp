class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int leng = nums.size();
        if (leng == 0) return 0;
        std::cout << "len is " << leng << std::endl;
        sort(nums.begin(), nums.end()); 
        
        cout << "Sorted \n"; 
        for (auto x : nums) 
            cout << x << " ";
        int s=0, e=0;
        bool f = 0;
        for (int i=0; i < leng; i++) {
            if (nums[i] < val) s = i+1;
            if (nums[i] == val) {
                e = i;
                f = 1;
            }
        }
        std::cout << "\ns: " << s << " e: " << e << endl;

        if (s<=e and f == 1) {
            for (int j=s; j<=e; j++) {
                //cout << "j: "<< j << endl; 
                nums.erase(nums.begin() + s);
            
                //for (auto x : nums) 
                //    cout << x << " ";
                //cout << endl;
                }
        //return (leng - (e - s + 1));
        }
        return nums.size();
        }
};