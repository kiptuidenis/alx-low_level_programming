#!/usr/bin/python3
"""This is a technical interview preparation
"""

def island_perimeter(grid):
    """That returns the perimeter of the island described in grid

    Args:
        grid (list): List of integers
    """
    if len(grid) > 100:
        return
    perim = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                x = i - 1
                y = j
                if x < 0:
                    perim += 1
                else:
                    if grid[x][y] == 0:
                        perim += 1
                x = i
                y = j - 1
                if y < 0:
                    perim += 1
                else:
                    if grid[x][y] == 0:
                        perim += 1
                x = i
                y = j + 1
                if y >= len(grid[i]):
                    perim += 1
                else:
                    if grid[x][y] == 0:
                        perim += 1
                x = i + 1
                y = j
                if y >= len(grid[i]):
                    perim += 1
                else:
                    if grid[x][y] == 0:
                        perim += 1
    return perim
