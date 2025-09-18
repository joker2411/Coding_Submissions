class Solution:
    def romanToInt(self, s: str) -> int:
        index = {'I': 1, 'IV': 4, 'V': 5, 'IX': 9, 'X': 10, 'XL': 40, 'L': 50, 'XC': 90, 'C': 100, 
                    'CD': 400, 'D': 500, 'CM': 900, 'M': 1000}
        output = 0
        curr_str = ""
        for letter in s:
            curr_str += letter
            if curr_str in index:
                continue
            else:
                output += index[curr_str[:-1]]
                curr_str = curr_str[-1]

        output += index[curr_str]
        return output