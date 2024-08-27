class Solution:
    def maximalSquare(self, matrix: List[List[str]]) -> int:
        ret = 0
        col, row = len(matrix[0]), len(matrix)
        dp = [[0] * (col + 1) for _ in range(row + 1)]
        #print(dp)
        for i in range(1, row+1):
            for j in range(1, col+1):
                if matrix[i-1][j-1] == '1':
                    dp[i][j] = min(dp[i-1][j], dp[i][j-1], dp[i-1][j-1]) + 1
                    ret = max(dp[i][j], ret)
        return ret**2
