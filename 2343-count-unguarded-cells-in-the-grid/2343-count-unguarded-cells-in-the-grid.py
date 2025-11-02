class Solution:
    def countUnguarded(self, m: int, n: int, guards: List[List[int]], walls: List[List[int]]) -> int:
        DIR = [[1,0], [-1,0], [0,1], [0,-1]]
        answer = 0
        visited = [[0]*n for _ in range(m)]

        def isValid(i, j):
            if i<0 or i>=m or j<0 or j>=n:
                return False
            return True
        def movement(nextR, nextC, direction):
            while(isValid(nextR, nextC)):
                if visited[nextR][nextC] == 2:
                    return
                visited[nextR][nextC] = 1
                nextR = nextR+direction[0]
                nextC = nextC+direction[1]

        for wall in walls:
            visited[wall[0]][wall[1]] = 2
        for guard in guards:
            visited[guard[0]][guard[1]] = 2

        for guard in guards:
            for direction in DIR:
                movement(guard[0]+direction[0], guard[1]+direction[1], direction)
        
        for row in visited:
            for val in row:
                if val==0:
                    answer += 1

        return answer