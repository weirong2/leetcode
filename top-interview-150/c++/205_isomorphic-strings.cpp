class Solution {
public:
    vector<string> strListToNumList(vector<string> s) {
        vector<string> tmp{};
        for (int i=0; i<s.size(); i++) {
            if (count(tmp.begin(), tmp.end(), s[i]) == 0) {
                tmp.push_back(s[i]);
            }
        }
        for (int i=0; i<tmp.size(); i++) {
            int x=0;
            while (x<s.size()) {
                if (s[x]==tmp[i]) {
                    s[x]=to_string(i);
                }
                x++;
            }
        }
        return s;
    }

    vector<string> stringToStringVector(string s) {
        vector<string> ret{};
        for (int i=0; i<s.size(); i++) {
            string t(1, s[i]);
            ret.push_back(t);
        }
        return ret;
    }

    bool isIsomorphic(string s, string t) {
        vector<string> ls=stringToStringVector(s);
        vector<string> lt=stringToStringVector(t);

        vector<string> lsn=strListToNumList(ls);
        vector<string> ltn=strListToNumList(lt);

        for (int i=0; i<ls.size(); i++) {
            if (lsn[i] != ltn[i]) return false;
        }
        return true;
    }
};
