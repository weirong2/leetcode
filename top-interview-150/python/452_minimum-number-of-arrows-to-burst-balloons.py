class Solution:
    def findMinArrowShots(self, points: List[List[int]]) -> int:
        points.sort(key = lambda x:(x[1], x[0]))
        print(points)
        i, count = 0, 0
        while i < len(points):
            tmp = points[i][1]
            count += 1
            while i<len(points) and tmp>=points[i][0] and tmp<=points[i][1]:
                i += 1
        return count