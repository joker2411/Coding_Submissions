class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        def sortFun(l: list):
            return l[0]

        intervals.sort(key=sortFun)

        start = intervals[0][0]
        end = intervals[0][1]
        N = len(intervals)
        final_range = list()

        for i in range(1, N):
            if intervals[i][0] <= end:
                end = intervals[i][1] if intervals[i][1] >= end else end
            else:
                final_range.append([start, end])
                start = intervals[i][0]
                end = intervals[i][1]

        final_range.append([start, end])
        return final_range