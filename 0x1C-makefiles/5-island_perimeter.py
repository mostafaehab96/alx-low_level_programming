#!/usr/bin/python3

"""Defines island_perimeter function."""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid."""

    if grid is None:
        return 0

    rows = len(grid)
    cols = len(grid[0])
    result = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                result += 4

                if j > 0 and grid[i][j - 1] == 1:
                    result -= 2

                if i > 0 and grid[i - 1][j] == 1:
                    result -= 2

    return result
