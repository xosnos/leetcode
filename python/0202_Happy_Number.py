class Solution:
    def isHappy(self, n: int) -> bool:
        memory = set()
        while n != 1:
            if n in memory:
                return False
            memory.add(n)
            n = sum([int(d) * int(d) for d in str(n)])
        return True
