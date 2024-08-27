class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len_s = s.size();
        unordered_set<char> s_set(s.begin(), s.end());
        int len_s_set = s_set.size();
        if (len_s == len_s_set) return len_s;

        int max_window = 1, len_t_set = 1;
        //cout << "max_window: " << max_window << " len_t_set: " << len_t_set << endl;
        for (int i=0; i<len_s; i++) {
            if (len_t_set > max_window) max_window = len_t_set;
            if (i+max_window > len_s) break;
            for (int w=max_window; w<len_s; w++) {
                //cout << "i: " << i << " w: " << w << endl;
                if ((i+w) > len_s) break;
                else {
                    set<char> t(s.begin()+i, s.begin()+i+w);
                    //cout << string(t.begin(), t.end()) << endl;
                    len_t_set = t.size();
                    if (w != len_t_set) break;
                }
            }
        }
        return max_window;
    }
};
