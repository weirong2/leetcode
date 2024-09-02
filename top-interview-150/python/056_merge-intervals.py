class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        ret = []
        len_intervals = len(intervals)
        if len_intervals == 0 or len_intervals == 1: return intervals
        intervals = sorted(intervals, key=lambda x:x[0])
        tmp = intervals[0]
        for i in range(1, len_intervals):
            if tmp[1] >= intervals[i][0]:
                tmp[1] = max(tmp[1], intervals[i][1])
            else:
                ret.append(tmp)
                tmp = intervals[i]
        ret.append(tmp)
        return ret