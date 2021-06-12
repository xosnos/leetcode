class Solution:
    def leastBricks(self, wall: List[List[int]]) -> int:
        colTotal = collections.defaultdict(int)
        colMax = 0
        for row in wall:
            col = 0
            for brick in row[:-1]:
                col += brick
                colTotal[col] += 1
                if colMax < colTotal[col]:
                    colMax = colTotal[col]
        return len(wall) - colMax

# O(M * N) Time, M = rows, N = max bricks per row
# O(M * N) Space, M = rows, N = max bricks per row
