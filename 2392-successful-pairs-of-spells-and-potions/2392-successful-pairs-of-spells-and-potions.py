import math
import bisect

class Solution:
    def successfulPairs(self, spells: List[int], potions: List[int], success: int) -> List[int]:
        potions.sort()
        size = len(potions)
        answer = list()

        for spell in spells:
            required = int(math.ceil(success/spell))
            potion_closest_ind = bisect.bisect_left(potions, required)
            answer.append(size-potion_closest_ind)
        return answer