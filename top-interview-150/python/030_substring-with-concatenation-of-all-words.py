class Solution:
    def validSubString(self, s: str, words: List[str]) -> bool:
        ret = False
        len_word = len(words[0])
        tmp = [s[i:i+len_word] for i in range(0, len(s), len_word)]
        #for i in tmp:
        #    if i not in words:
        #        return False
        if sorted(tmp) == words:
            return True
        return False

    def findSubstring(self, s: str, words: List[str]) -> List[int]:
        ret = []
        len_word = len(words[0])
        len_window = len(words) * len_word
        i = 0
        sorted_words = sorted(words)
        while(i<=(len(s)-len_window)):
            if self.validSubString(s[i:i+len_window], sorted_words):
                ret.append(i)
            i += 1
        return ret