class Solution {
public:
    bool isPalindrome(string s) {
        // remove all non-alnum
        s.erase(std::remove_if(s.begin(), s.end(), 
        []( auto const& c ) -> bool { return !std::isalnum(c); } ), s.end());
        // to_lower
        std::transform(s.begin(), s.end(), s.begin(),
        [](unsigned char c){ return std::tolower(c); });
        //cout << s.size() << endl;
        //cout << s << endl;
        int length = s.size();
        for(int i=0; i<(length/2); i++)
        {
            if (s[i] != s[length-i-1]) return false;
        }
        return true;
    }
};