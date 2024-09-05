class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        zero_on_rows, zero_on_cols = set(), set()
        for i in range(len(matrix)):
            for j in range(len(matrix[i])):
                if matrix[i][j] == 0:
                    zero_on_rows.add(i)
                    zero_on_cols.add(j)
        for i in range(len(matrix)):
            for j in range(len(matrix[i])):
                if i in zero_on_rows or j in zero_on_cols:
                    matrix[i][j] = 0
        return matrix
        