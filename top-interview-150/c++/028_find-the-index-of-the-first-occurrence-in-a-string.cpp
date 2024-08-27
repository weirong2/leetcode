class Solution {
public:
    int strStr(string haystack, string needle) {
        int sizeNeedle = needle.size();
        for (int i=0; i<haystack.size(); i++) {
            if (haystack[i] == needle[0]) {
                string tmp = haystack.substr(i, sizeNeedle);
                if (tmp == needle) return i;
            }
        }
        return -1;
    }
};