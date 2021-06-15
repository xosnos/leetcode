import collections
import heapq

class Solution:
    def frequencySort(self, s: str) -> str:

        charFreq = collections.defaultdict(int)
        for char in s:
            charFreq[char] += 1

        cf_pairs = []
        for char, freq in charFreq.items():
            cf_pairs.append((-freq, char))
        heapq.heapify(cf_pairs)

        output = ""
        while cf_pairs:
            freq, char = heapq.heappop(cf_pairs)
            output = output + -freq * char
        return output

# O(N*log(N)) Time
# O(N) Space