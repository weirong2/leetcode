class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if (accumulate(digits.begin(), digits.end(), 0) == 9*digits.size()) {
            vector<int> r{1};
            for (int i=0; i<digits.size(); i++) {
                r.push_back(0);
            }
            return r; 
        }

        int pos=digits.size();
        for (pos>=0; --pos;) {
            int tmp = digits[pos];
            //cout << "digits[pos]: " << tmp << " pos: " << pos << endl;
            if (tmp != 9) break;
        }
        if (pos==digits.size()-1) {
            digits.back() += 1;
            return digits;
        }
        else {
            //cout << "pos: " << pos << endl;
            vector<int> sub_vector(digits.begin(), digits.begin()+pos+1);
            //for (auto v : sub_vector)
            //    cout << v << "\n";
            sub_vector[pos] += 1;
            //for (auto v : sub_vector)
            //    cout << v << "\n";
            for (int i=0; i<digits.size()-pos-1; i++) {
                sub_vector.push_back(0);
            }
            return sub_vector;
        }
    }
};