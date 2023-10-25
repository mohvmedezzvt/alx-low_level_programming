#!/usr/bin/python3
"""Conatains the definition of island_perimeter function.
"""


def island_perimeter(grid):
    """Calculate the perimeter of an island represented by a grid.

    Args:
        grid (List[List[int]]): A list of lists of integers.

    Returns:
        int: The perimeter of the island.
    """
    if not grid:
        return 0

    perimeter = 0
    r, c = len(grid), len(grid[0])

    for i in range(r):
        for j in range(c):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
