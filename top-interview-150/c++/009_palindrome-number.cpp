class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        std::string s=to_string(x);
        int length = s.size();
        for(int i=0; i<(length/2); i++)
        {
            if (s[i] != s[length-i-1]) return false;
        }
        return true;
    }
};