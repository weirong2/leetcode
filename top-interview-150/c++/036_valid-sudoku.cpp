class Solution {
public:
    bool isValidNine(vector<char>& nine) {
        /*
        if (nine.size() != 9) {
            cout << "nine.size is not 9" << endl;
        }
        */
        vector<char> temp{};
        for (int i=0; i<nine.size(); i++) {
            if (nine[i] != '.') temp.push_back(nine[i]);
        }
        unordered_set<char> temp_set(temp.begin(), temp.end());
        if (temp.size() != temp_set.size()) {
            /*
            for (auto x : temp) 
                cout << x << " ";
            cout << endl;
            */
            return false;
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        vector<char> tempx{}, tempy{}, tempz{};
        for (int i=0; i<board.size(); i++) {
            //cout << "round " << i << endl;
            for (int j=0; j<board[i].size(); j++) {
                //cout << "i: " << i << " j: " << j << endl;
                tempx.push_back(board[i][j]);
                tempy.push_back(board[j][i]);
            }
        if (!isValidNine(tempx)) {
            //cout << "return by tempx" << endl;
            return false;
        }
        else if (!isValidNine(tempy)) {
            //cout << "return by tempy" << endl;
            return false;
        }
        else {
            tempx.clear();
            tempy.clear();
        }
    }

        for (int i=0; i<9; i+=3) {
            //cout << "i: " << i << endl;
            for (int j=0; j<9; j+=3) {
                //cout << "j: " << j << endl;
                for (int x=0; x<3; x++) {
                    for (int y=0; y<3; y++) {
                        tempz.push_back(board[x+i][y+j]);
                        //cout << "x+i: " << x+i << " y+j: " << y+j << endl;
                    }
                }
                if (!isValidNine(tempz)) return false;
                else tempz.clear();
            }
        }

        return true;
    }
};

/*
        tmpx, tmpy = [], []
        for i in range(0, len(board)):
            for j in range(0, len(board[i])):
                tmpx.append(board[i][j])
                tmpy.append(board[j][i])
            if not self.isValidNine(tmpx):
                return False
            elif not self.isValidNine(tmpy):
                return False
            else:
                tmpx, tmpy = [], []

        tmp = []
        for i in range(0, 9, 3):
            for j in range(0, 9, 3):
                for x in range(0,3):
                    for y in range(0,3):
                        tmp.append(board[x+i][y+j])
                if not self.isValidNine(tmp):
                    return False
                else:
                    tmp = []
        return True
*/