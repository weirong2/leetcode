class Solution:
    def isValidNine(self, nine: List[str]) -> bool:
        tmp = [i for i in nine.copy() if i in self.validNumberChars]
        if len(tmp) != len(set(tmp)):
            return False
        return True

    def isValidSudoku(self, board: List[List[str]]) -> bool:
        self.validNumberChars = ['1', '2', '3', '4', '5', '6', '7', '8', '9']

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
'''
00 01 02    03 04 05    06 07 08
10 11 12    13 14 15    16 17 18
20 21 22    23 24 25    26 27 28

30 31 32    33 34 35    36 37 38
40 41 42    43 44 45    46 47 48
50 51 52    53 54 55    56 57 58

60 61 62    63 64 65    66 67 68
70 71 72    73 74 75    76 77 78
80 81 82    83 84 85    86 87 88
'''