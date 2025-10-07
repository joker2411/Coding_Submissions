import bisect

class Solution:
    def avoidFlood(self, rains: List[int]) -> List[int]:
        size = len(rains)
        index = dict()
        dry = list()
        answer = [0]*size

        for i in range(size):
            if rains[i] == 0:
                dry.append(i)
            else:
                if rains[i] not in index:
                    index[rains[i]] = i
                    answer[i] = -1
                else:
                    if len(dry) == 0:
                        return []
                    last_ind = index[rains[i]]
                    nearest_dry_ind = bisect.bisect_right(dry, last_ind)
                    if nearest_dry_ind == len(dry):
                        return []
                    nearest_dry = dry[nearest_dry_ind]
                    answer[nearest_dry] = rains[i]
                    answer[i] = -1
                    index[rains[i]] = i
                    _ = dry.pop(nearest_dry_ind)

        for ind in dry:
            answer[ind] = 1

        return answer