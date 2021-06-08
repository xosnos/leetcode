class Solution:
    def topKFrequent(self, words: List[str], k: int) -> List[str]:
        word_counts = self.get_counts(words)
        wc_pairs = []
        for word, count in word_counts.items():
            wc_pairs.append((-count, word))
        heapq.heapify(wc_pairs)
        result = []
        for _ in range(k):
            result.append(heapq.heappop(wc_pairs)[1])
        return result
        
    def get_counts(self, words):
        result = collections.defaultdict(int)
        for word in words:
            result[word] += 1
        return result

# O(n + k*log(n)) Time
# O(n) Space
