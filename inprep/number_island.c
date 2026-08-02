// DFS function to visit all connected land cells
void dfs(char **grid, int gridSize, int *gridColSize, int row, int col)
{
    // Base condition:
    // Return if row is outside the grid,
    // or column is outside the grid,
    // or current cell is water ('0')
    if (row < 0 || row >= gridSize ||
        col < 0 || col >= gridColSize[0] ||
        grid[row][col] == '0')
    {
        return;
    }

    // Mark current land as visited
    // We convert '1' to '0' so it is not counted again
    grid[row][col] = '0';

    // Visit the cell below
    dfs(grid, gridSize, gridColSize, row + 1, col);

    // Visit the cell above
    dfs(grid, gridSize, gridColSize, row - 1, col);

    // Visit the cell to the right
    dfs(grid, gridSize, gridColSize, row, col + 1);

    // Visit the cell to the left
    dfs(grid, gridSize, gridColSize, row, col - 1);
}


int numIslands(char **grid, int gridSize, int *gridColSize)
{
    // Stores the total number of islands
    int islands = 0;

    // Traverse every row
    for (int i = 0; i < gridSize; i++)
    {
        // Traverse every column
        for (int j = 0; j < gridColSize[0]; j++)
        {
            // If current cell is land
            if (grid[i][j] == '1')
            {
                // We found a new island
                islands++;

                // Visit every connected land cell
                // and mark them as visited
                dfs(grid, gridSize, gridColSize, i, j);
            }
        }
    }

    // Return total islands found
    return islands;
}
