class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        str_len = len(s)
        if str_len == len(set(s)):
            return str_len

        max_window, t_set_len = 1, 1
        for i in range(0, str_len):
            for w in range(max_window, str_len):
                if (i+w) <= str_len:
                    t = s[i:i+w]
                else:
                    break
                t_set_len = len(set(t))
                if (len(t) != t_set_len):
                    break
            if t_set_len > max_window:
                max_window = t_set_len
        return max_window
