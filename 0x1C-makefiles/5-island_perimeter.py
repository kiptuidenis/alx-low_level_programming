#!/usr/bin/python3

def island_perimeter(grid):
    """Finds The perimeter"""
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4  # Each land cell contributes 4 sides to the perimeter
                
                # Check adjacent cells (up, down, left, right)
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2  # Subtract 2 for each adjacent land cell
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2  # Subtract 2 for each adjacent land cell
                    
    return perimeter
