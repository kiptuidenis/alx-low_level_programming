#!/usr/bin/python3
"""This is a technical interview preparation
"""

def island_perimeter(grid):
    """That returns the perimeter of the island described in grid

    Args:
        grid (list): List of integers
    """
    total_perim = 0
    square_perim = 0
    check_lake = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                x = i - 1
                y = j
                if x < 0:
                    square_perim += 1
                else:
                    if grid[x][y] == 0:
                        square_perim += 1
                x = i
                y = j - 1
                if y < 0:
                    square_perim += 1
                else:
                    if grid[x][y] == 0:
                        square_perim += 1
                x = i
                y = j + 1
                if y >= len(grid[i]):
                    square_perim += 1
                else:
                    if grid[x][y] == 0:
                        square_perim += 1
                x = i + 1
                y = j
                if y >= len(grid[i]):
                    square_perim += 1
                else:
                    if grid[x][y] == 0:
                        square_perim += 1
            total_perim += square_perim
            if square_perim == 3:
                check_lake += 1
            square_perim = 0
    if check_lake < 2:
        return
    return total_perim
