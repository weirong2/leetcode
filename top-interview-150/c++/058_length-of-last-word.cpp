class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s.size() == 1) return 1;
        int posa = 0;
        int posb = -1;
        for (int i=s.size()-1; i>=0; i--) {
            if (s[i] !=' ') {
                posa = i;
                break;
            }
        }
        string st = s.substr(0, posa+1);
        //cout << "st: " << st << endl;
        if (st.size() == 1) return 1;
        for (int i=st.size()-1; i>=0; i--) {
            if (s[i] ==' ') {
                posb = i;
                break;
            }
        }
        //cout << "posa: " << posa << " posb: " << posb << endl;
        return st.size()-1-posb;
    }
};