#!/usr/bin/python3
"""Finds The perimeter of island"""

def island_perimeter(grid):
    """Finds The perimeter"""
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4
                
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2 
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
                    
    return perimeter
