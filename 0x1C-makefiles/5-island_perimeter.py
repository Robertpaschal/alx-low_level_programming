#!/usr/bin/python3


"""defines an island perimeter measuring function"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the islnad described in the grid.

    Parameters:
    - grid (list of list of intergers): Grid representing the island.

    Returns:
    - int: Perimeter of the island
    """

    if not grid or not grid[0]:
        return 0

    rows, cols = len(grid), len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
