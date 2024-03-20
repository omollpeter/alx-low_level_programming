#!/usr/bin/python3
"""
This module contains the following function:
    island_perimeter - Calculates the perimeter of an island. The
                        island is described in a grid containing sq.
                        boxes of 1x1 units

"""


def island_perimeter(grid):
    """
    Calculates perimeter of island in a grid

    Args:
        grid (list of lists): Grid with or without an island
                        island is marked with 1, while surr. water

    Returns:
        perimeter (int): Perimeter of the island
    """

    if not isinstance(grid, list):
        raise TypeError("The grid must be a list")

    height = len(grid)
    if height > 100:
        raise ValueError("width/height should not exceed 100")

    prmtr = 0
    for i in range(height):
        if not isinstance(grid[i], list):
            raise TypeError("The grid must be a list of lists")
        width = len(grid[i])
        if width > 100:
            raise ValueError("width/height should not exceed 100")

        for j in range(width):
            if not isinstance(grid[i][j], int):
                raise TypeError("The grid list should contain ints")
            if grid[i][j] not in {0, 1}:
                raise ValueError("The grid should contain only 0 and 1")

            if grid[i][j] == 1:
                prmtr += 4
                if i > 0 and grid[i - 1][j] == 1:
                    prmtr -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    prmtr -= 2

    return prmtr
