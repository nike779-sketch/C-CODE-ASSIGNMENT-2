//1351. Count Negative Numbers in a Sorted Matrix
int countNegatives(int** grid, int gridSize, int* gridColSize) {
    int count = 0;
    int row = 0;
    int col = gridColSize[0] - 1;   

    while (row < gridSize && col >= 0) {
        if (grid[row][col] < 0) {
         
            count += gridSize - row;
            col--;
        } else {
            row++;
        }
    }

    return count;
}
