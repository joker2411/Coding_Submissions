class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        version1_list = version1.split('.')
        version2_list = version2.split('.')

        version1_size = len(version1_list)
        version2_size = len(version2_list)

        for ind in range(max(version1_size, version2_size)):
            val1 = 0 if ind>=version1_size else int(version1_list[ind])
            val2 = 0 if ind>=version2_size else int(version2_list[ind])

            if val1 > val2:
                return 1
            elif val1 < val2:
                return -1
        return 0