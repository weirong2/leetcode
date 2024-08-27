class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m, j=n;
        if (m == 0) {
            nums1 = nums2;
        }
        else {
            while (i+j>0 & i>0 & j>0) {
                std::cout<<"\ni="<<i<<" j="<<j<<std::endl;
                std::cout<<"\nnums1[i-1]="<< nums1[i-1]<<" nums2[j-1]="<< nums2[j-1] <<"\n";
                if (nums1[i-1] > nums2[j-1]) {
                    nums1[i+j-1] = nums1[i-1];
                    i--;
                }
                else {
                    nums1[i+j-1] = nums2[j-1];
                    j--;
                }
            }
            if (j > 0) {
                std::cout<<"\nj="<< j << "\n";
                for (int k = j; k > 0; k--) {
                    nums1[k-1] = nums2[k-1];
                }
            }
        }
    }
};