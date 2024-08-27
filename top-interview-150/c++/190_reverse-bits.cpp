class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32> Bitsets(n);
        //cout << "bitset : " << Bitsets << endl;
        string Bitsets2Str = Bitsets.to_string();
        //cout << "string1: " << Bitsets2Str << endl;
        vector<char> raw(Bitsets2Str.begin(), Bitsets2Str.end());
        vector<char> rev{};
        for (int i=Bitsets2Str.size()-1; i>=0; --i) {
            rev.push_back(Bitsets2Str[i]);
        }
        string revStr(rev.begin(), rev.end());
        //cout << "string2: " << revStr << " length: " << revStr.length()<< endl;

        bitset<32> revBitsets(revStr);
        //cout << "string4: " << revBitsets.to_string() << endl;
        return revBitsets.to_ulong();
    }
};