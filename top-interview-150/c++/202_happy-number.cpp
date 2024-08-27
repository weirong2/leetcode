class Solution {
public:
    int process(int x) {
        string tmpString = to_string(x);
        int tmpStringSize = tmpString.size();
        int tmpInt = 0;
        for (int i=0; i<tmpStringSize; i++) {
            tmpInt += pow(int(tmpString[i]-'0'), 2);
        }
        return tmpInt;
    }

    bool checkx(int x) {
        if (x == 1) return true;
        string tmpString = to_string(x);
        //cout << "checkx() tmpString: " << tmpString << endl;
        string subString = tmpString.substr(1, tmpString.size());
        //cout << "checkx() subString: " << subString << endl;
        subString.erase(unique(subString.begin(), subString.end()), subString.end());
        //cout << "checkx() subString: ";
        //for (auto x : subString) 
        //    cout << x << " ";
        //cout << endl;
        if ((tmpString[0] == '1') && (subString == "0")) return true;
        return false;
    }

    bool isHappy(int n) {
        vector<int> tmpIntV{};
        int ret = process(n);
        while (count(tmpIntV.begin(), tmpIntV.end(), ret) <= 0) {
            if (!checkx(ret)) {
                tmpIntV.push_back(ret);
                ret = process(ret);
            }
            else return true;
        }
        return false;
    }
};