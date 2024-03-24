#!/usr/bin/python3
"""5-island_perimeter module"""


def island_perimeter(grid):
    """returns the perimeter of the island as  described in grid"""

    height = len(grid)
    width = len(grid[0])
    size = 0
    edges = 0

    for a in range(height):
        for b in range(width):
            if grid[a][b] == 1:
                size += 1
                if (b > 0 and grid[a][b - 1] == 1):
                    edges += 1
                if (a > 0 and grid[a - 1][b] == 1):
                    edges += 1
    return ((size * 4) - (edges * 2))
