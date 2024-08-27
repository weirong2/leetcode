class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_size = s.size();
        int t_size = t.size();
        if (s_size == 0) return true;
        if (t_size == 0) return false;
        if (s_size > t_size) return false;
        if (s_size == t_size) {
            if (t == s) return true;
            else return false;
        }
        int pos=0;
        for (int i=0; i<s_size; i++) {
            //cout << "s[i]: " << s[i] << " i: " << i << endl;
            if (pos>=t.size()) return false;
            for (int j=pos; j<t_size; j++) {
                //cout << "  t[j]: " << t[j] << " j: " << j << endl;
                if (t[j] == s[i]) {
                    pos=j+1;
                    break;
                }
                if (j==t.size()-1) return false;
            }
        }
        return true;
    }
};