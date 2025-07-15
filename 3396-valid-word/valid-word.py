class Solution:
    def isValid(self, word: str) -> bool:
        word = word.lower()
        flag3 = 0
        flag4 = 0
        if len(word) < 3:
            return False

        for i in word:
            if (ord(i) >= 48 and ord(i) <= 57) or (ord(i) >= 97 and ord(i) <= 122):
                continue
            else:
                return False

        for i in word:
            if ord(i) == 97 or ord(i) == 101 or ord(i) == 105 or ord(i) == 111 or ord(i) == 117:
                flag3 = 1

            else:
                if (ord(i) >= 97 and ord(i) <= 122):
                    flag4 = 1

        if flag3 == 1 and flag4 == 1:
            return True
        else:
            return False