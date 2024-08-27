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

    vector<string> stringToStringVectorBySpace(string s) {
        vector<string> ret{};
        string t;
        cout << "size(): " << s.size() << endl;
        for (int i=0; i<s.size(); i++) {
            for (int j=i; j<=s.size(); j++) {
                if (s[j] == ' ' || j==s.size()) {
                    cout << "i: " << i << " j: " << j << endl;
                    ret.push_back(s.substr(i, j-i));
                    i = j+1;
                }
            }
        }
        return ret;
    }

    bool wordPattern(string pattern, string s) {
        vector<string> lp=stringToStringVector(pattern);
        vector<string> ls=stringToStringVectorBySpace(s);

        vector<string> lpn=strListToNumList(lp);
        vector<string> lsn=strListToNumList(ls);

        if (lsn.size() != lpn.size()) return false;

        for (int i=0; i<ls.size(); i++) {
            if (lsn[i] != lpn[i]) return false;
        }
        return true;
    }
};