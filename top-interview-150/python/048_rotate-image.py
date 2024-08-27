class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        for i in range(len(matrix)):
            for j in range(i):
                tmp = matrix[i][j]
                matrix[i][j] = matrix[j][i]
                matrix[j][i] = tmp
        l, r = 0, len(matrix) -1
        while (l < r):
            for i in range(len(matrix)):
                tmp = matrix[i][l]
                matrix[i][l] = matrix[i][r]
                matrix[i][r] = tmp
            l += 1
            r -= 1
        return matrix