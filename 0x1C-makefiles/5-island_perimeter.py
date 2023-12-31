#!/usr/bin/python3

def island_perimeter(grid):
    """Finds the perimeter of Island

    Args:
        grid (list): list of lists of integers

    Returns:
        int: Perimeter of Island
    """
    perim = 0
    rows, cols = len(grid), len(grid[0]) if grid else 0  # Get the dimensions of the grid

    def is_valid(x, y):
        """ Helper function to check valid neighboring cells

        Args:
            x (_type_): _description_
            y (_type_): _description_

        Returns:
            _type_: _description_
        """
        return 0 <= x < rows and 0 <= y < cols

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                neighbors = [(i - 1, j), (i, j - 1), (i, j + 1), (i + 1, j)]
                for x, y in neighbors:
                    if not is_valid(x, y) or grid[x][y] == 0:
                        perim += 1

    return perim
