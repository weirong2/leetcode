class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size()==0) return "";
        if (strs.size()==1) return strs[0];

        string ret = "";

        string smin = *std::min_element(strs.begin(), strs.end(), 
                [] (const std::string& s1, const std::string& s2) { 
                    return s1.length() < s2.length(); }
                );
        //cout << "smin: " << smin << " size: " << smin.size() << endl;

        for (int j=1; j<=smin.size(); j++) {
            string tmp2 = smin.substr(0, j);
            //cout << "tmp2: " << tmp2 << endl;
            for (int i=0; i<strs.size(); i++) {
                string tmp1 = strs[i].substr(0, j);
                //cout << "tmp1: " << tmp1 << endl;
                if (tmp1 != tmp2) return tmp1.substr(0, tmp1.size()-1);
            }
            ret = tmp2;
        }
        return ret;
    }
};