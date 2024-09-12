#!/usr/bin/python3
"""
5-island_perimeter
"""

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
        grid (list of list of int): 2D grid where 1 represents land and 0 represents water.

    Returns:
        int: The perimeter of the island.
    """
    if not grid:
        return 0

    height = len(grid)
    width = len(grid[0])
    perimeter = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                # Check the four possible directions
                if i == 0 or grid[i - 1][j] == 0:  # Check above
                    perimeter += 1
                if i == height - 1 or grid[i + 1][j] == 0:  # Check below
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:  # Check left
                    perimeter += 1
                if j == width - 1 or grid[i][j + 1] == 0:  # Check right
                    perimeter += 1

    return perimeter
