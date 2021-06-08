class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        chest = set([jewel for jewel in jewels])
        count = 0
        for stone in stones:
            if stone in chest:
                count += 1
        return count
