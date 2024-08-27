class Solution {
public:
    bool isValid(string s) {
        int s_size = s.size();
        
        if (s_size == 0) return true;
        if (s_size % 2 !=0) return false;

        //cout << "s0: ";
        //for (auto x : s) 
        //    cout << x << " ";
        //cout << endl;
        while (s.size() > 0) {
            int org_size = s.size();
            for (int i=0; i<s.size(); i++) {
                if (((s[i]=='(') & (s[i+1]==')')) | ((s[i]=='[') & (s[i+1]==']')) | ((s[i]=='{') & (s[i+1]=='}'))) {
                    s.erase(i, 2);
                    i = 0;
                }
            }
            if (org_size == s.size()) return false;
        }
        return true;
    }
};