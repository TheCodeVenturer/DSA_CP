def dfs(i, j, n, grid, vis):
    if i < 0 or i >= 2 or j < 0 or j >= n or vis[i][j]==1:
        return
    ch = grid[i][j]
    vis[i][j] = 1
    if ch == '>':
        j += 1
    else:
        j -= 1
    update = [[0, 0, 1, -1], [1, -1, 0, 0]]
    for del_idx in range(4):
        dfs(i + update[0][del_idx], j + update[1][del_idx], n, grid, vis)

t = int(input())
for _ in range(t):
    n = int(input())
    grid = [input() for _ in range(2)]
    vis = [[0] * n for _ in range(2)]
    dfs(1, 0, n, grid, vis)
    dfs(0,1,n,grid,vis)
    if vis[1][n - 2]==1 and grid[1][n - 2] == '>':
        print("YES")
    else:
        print("NO")
