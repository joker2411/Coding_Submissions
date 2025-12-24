class Solution:
    def minimumBoxes(self, apple: List[int], capacity: List[int]) -> int:
        total = sum(apple)
        capacity.sort(reverse=True)
        
        ind = 0
        while total>0:
            total = total-capacity[ind]
            ind += 1

        return ind