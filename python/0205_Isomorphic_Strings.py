class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        isomorphs = {}
        isomorpht = {}
        for i in range(len(s)):
            sHash = isomorphs[s[i]] if s[i] in isomorphs else None
            tHash = isomorpht[t[i]] if t[i] in isomorpht else None
            if sHash and sHash != t[i]:
                return False
            else:
                isomorphs[s[i]] = t[i]
            if tHash and tHash != s[i]:
                return False
            else:
                isomorpht[t[i]] = s[i]
        return True

# O(n) Time
# O(n) Space
