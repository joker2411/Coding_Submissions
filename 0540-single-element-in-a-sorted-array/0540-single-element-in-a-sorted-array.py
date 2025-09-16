class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:
        N = len(nums)
        if N ==1:
            return nums[0]

        low = 0
        high = N-1

        while(low < high):
            mid = low + (high-low)//2
            isEven = ((mid-low)%2==0)

            if nums[mid] == nums[mid+1]:
                if isEven:
                    low = mid+2
                else:
                    high = mid-1
            
            elif nums[mid] == nums[mid-1]:
                if isEven:
                    high = mid-2
                else:
                    low = mid+1
            else:
                return nums[mid]
        return nums[low]