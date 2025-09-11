class Solution:
    def sortVowels(self, s: str) -> str:
        index = ['A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u']
        d = dict()
        for letter in s:
            if letter in index and letter in d:
                d[letter] += 1
            elif letter in index and letter not in d:
                d[letter] = 1

        output_str = ""
        for letter in s:
            if letter in index:
                for vowel in index:
                    if d.get(vowel, 0) > 0:
                        output_str += vowel
                        d[vowel] -= 1
                        break
            else:
                output_str += letter

        return output_str