class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        //std::sort(ransomNote.begin(), ransomNote.end());
        //std::sort(magazine.begin(), magazine.end());
        //cout << "ransomNote: " << ransomNote << endl;
        //cout << "magazine: " << magazine << endl;
        for (int i=0; i<ransomNote.size(); i++) {
            int pos = magazine.find(ransomNote[i]);
            //cout << "magazine: " << magazine << endl;
            if (pos == std::string::npos) return false;
            else {
                //cout << ransomNote[i] << endl;
                magazine.erase(magazine.begin() + pos);
            }
        }
        return true;
    }
};