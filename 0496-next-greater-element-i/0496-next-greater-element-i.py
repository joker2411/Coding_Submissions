class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        st:list = list()
        index:dict = dict()
        for num in nums2:
            if len(st)==0 or num < st[-1]:
                st.append(num)
            elif num > st[-1]:
                while len(st)>0 and num > st[-1]:
                    temp = st.pop()
                    index[temp] = num
                st.append(num)
        
        for num in st:
            index[num] = -1

        answer = [index[num] for num in nums1]
        return answer