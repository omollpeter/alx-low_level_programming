#!/usr/bin/python3
"""
5-main
"""
island_perimeter = __import__('5-island_perimeter').island_perimeter

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))

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

    if type(grid) is not list:
        raise TypeError("The grid must be a list")

    height = len(grid)
    if height > 100:
        raise ValueError("width/height should not exceed 100")
    width = 0
    for item in grid:
        if type(item) is not list:
            raise TypeError("The grid must be a list of list")
        else:
            width = len(item)
            if width > 100:
                raise ValueError("width/height should not exceed 100")
            for i in range(width):
                if i == 0 or i == width - 1:
                    if type(item[i]) is not int:
                        raise TypeError("The grid list shld contain ints")
                    if item[i] != 0:
                        raise ValueError("The grid shld be surr. with water")
                else:
                    if type(item[i]) is not int:
                        raise TypeError("The grid list shld contain ints")
                    if item[i] < 0 or item[i] > 1:
                        print(item[i])
                        raise ValueError("The grid shld contain only 0 and 1")
    prmtr = 0
    for i in range(1, height - 1):
        for j in range(1, width - 1):
            if i == 1:
                if grid[i][j] == 1:
                    bottom = grid[i + 1][j]
                    left = grid[i][j - 1]
                    right = grid[i][j + 1]
                    if left == 1 and bottom == 1 and right == 1:
                        prmtr += 1
                    elif left == 0 and bottom == 1 and right == 0:
                        prmtr += 3
                    elif left == 1 and bottom == 1 and right == 0:
                        prmtr += 2
                    elif left == 0 and bottom == 1 and right == 1:
                        prmtr += 2
                    elif left == 1 and bottom == 0 and right == 1:
                        prmtr += 2
                    elif left == 0 and bottom == 0 and right == 1:
                        prmtr += 3
                    elif left == 1 and bottom == 0 and right == 0:
                        prmtr += 3
                    elif left == 0 and bottom == 0 and right == 0:
                        prmtr += 4
                        return prmtr
                    if right == 0:
                        break
            elif i == height - 2:
                if grid[i][j] == 1:
                    top = grid[i - 1][j]
                    left = grid[i][j - 1]
                    right = grid[i][j + 1]
                    if left == 1 and top == 1 and right == 1:
                        prmtr += 1
                    elif left == 0 and top == 1 and right == 0:
                        prmtr += 3
                    elif left == 1 and top == 1 and right == 0:
                        prmtr += 2
                    elif left == 0 and top == 1 and right == 1:
                        prmtr += 2
                    elif left == 1 and top == 0 and right == 1:
                        prmtr += 2
                    elif left == 0 and top == 0 and right == 1:
                        prmtr += 3
                    elif left == 1 and top == 0 and right == 0:
                        prmtr += 3
                    elif left == 0 and top == 0 and right == 0:
                        prmtr += 4
                        return prmtr
                    if right == 0:
                        break
            else:
                if grid[i][j] == 1:
                    top = grid[i - 1][j]
                    left = grid[i][j - 1]
                    right = grid[i][j + 1]
                    bottom = grid[i - 1][j]
                    if left == 1 and top == 1 and right == 1 and bottom == 1:
                        prmtr += 0
                    elif left == 1 and top == 0 and right == 1 and bottom == 1:
                        prmtr += 1
                    elif left == 1 and top == 0 and right == 1 and bottom == 0:
                        prmtr += 2
                    elif left == 0 and top == 1 and right == 1 and bottom == 1:
                        prmtr += 1
                    elif left == 1 and top == 0 and right == 0 and bottom == 0:
                        prmtr += 3
                    elif left == 0 and top == 0 and right == 1 and bottom == 0:
                        prmtr += 3
                    elif left == 0 and top == 0 and right == 0 and bottom == 1:
                        prmtr += 3
                    elif left == 0 and top == 1 and right == 0 and bottom == 0:
                        prmtr += 3
                    elif left == 0 and top == 1 and right == 0 and bottom == 1:
                        prmtr += 3
                    elif left == 0 and top == 0 and right == 1 and bottom == 1:
                        prmtr += 2
                    elif left == 0 and top == 1 and right == 1 and bottom == 0:
                        prmtr += 2
                    elif left == 1 and top == 0 and right == 0 and bottom == 1:
                        prmtr += 2
                    elif left == 1 and top == 1 and right == 0 and bottom == 0:
                        prmtr += 2
                    elif left == 1 and top == 1 and right == 0 and bottom == 1:
                        prmtr += 1
                    elif left == 1 and top == 1 and right == 1 and bottom == 0:
                        prmtr += 1
                    elif left == 0 and top == 0 and right == 0 and bottom == 0:
                        prmtr += 4
                        return prmtr
                    if right == 0:
                        break

    return prmtr
