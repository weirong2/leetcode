class Solution {
public:
    int hammingWeight(int n) {
        int ret = 0;
        bitset<32> bs(n);
        string bss = bs.to_string();
        //cout << bss << endl;
        for (int i; i<bss.size(); i++) {
            if (bss[i] == '1') ret++;
        }
        return ret;
    }
};