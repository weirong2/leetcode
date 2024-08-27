#include <iostream>
#include <vector>

class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        int i=m, j=n;
        while (i+j >1 & i>0 & j>0) {
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
        std::cout << std::endl;
        if (j > 0) {
                std::cout<<"\nj="<< j << "\n";
                for (int k = j; k > 0; k--) {
                    nums1[k-1] = nums2[k-1];
                }
        }
    }
};

int main() {
    std::cout << "Hello\n";
    static const int arr1[] = {1,2,3,0,0,0};
    int m = 3;
    //static const int arr1[] = {2,0};
    //int m = 1;

    std::vector<int> vec1 (arr1, arr1 + sizeof(arr1) / sizeof(arr1[0]) );
    static const int arr2[] = {2,5,6};
    int n = 3;
    //static const int arr2[] = {1};
    //int n = 1;
    std::vector<int> vec2 (arr2, arr2 + sizeof(arr2) / sizeof(arr2[0]) );

    Solution s;
    s.merge(vec1, m, vec2, n);

    for (auto d : vec1)
    {
        std::cout << d << std::endl;
    }
}

