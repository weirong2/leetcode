class Solution {
public:
    int romanToInt(string s) {
        int ret = 0;
        for (int i=0; i<s.size(); i++) {
            //cout << "i: " << i << endl;
            if (s[i]=='I' && s[i+1]=='V') {
                ret+=4;
                i++;
                continue;
            }
            if (s[i]=='I' && s[i+1]=='X') {
                ret+=9;
                i++;
                continue;
            }
            if (s[i]=='X' && s[i+1]=='L') {
                ret+=40;
                i++;
                continue;
            }
            if (s[i]=='X' && s[i+1]=='C') {
                ret+=90;
                i++;
                continue;
            }
            if (s[i]=='C' && s[i+1]=='D') {
                ret+=400;
                i++;
                continue;
            }
            if (s[i]=='C' && s[i+1]=='M') {
                ret+=900;
                i++;
                continue;
            }
            if (s[i]=='M') ret+= 1000;
            else if (s[i]=='D') ret+= 500;
            else if (s[i]=='C') ret+= 100;
            else if (s[i]=='L') ret+= 50;
            else if (s[i]=='X') ret+= 10;
            else if (s[i]=='V') ret+= 5;
            else if (s[i]=='I') ret+= 1;
        }
        return ret;
    }
};