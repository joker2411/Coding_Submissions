class Solution:
    def maximumEnergy(self, energy: List[int], k: int) -> int:
        size = len(energy)
        for i in range(size-1, -1, -1):
            if i+k >= size:
                continue
            energy[i] += energy[i+k]
        return max(energy)