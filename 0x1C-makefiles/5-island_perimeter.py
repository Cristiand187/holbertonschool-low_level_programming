#!/usr/bin/python3
"""5-island_perimeter module"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    c = 0
    l_grid = len(grid) - 1
    w_grid = len(grid[0]) - 1

    for idx, r in enumerate(grid):
        for j, n in enumerate(r):
            if n == 1:
                if idx == 0 or grid[idx - 1][j] != 1:
                    c += 1
                if j == 0 or grid[idx][j - 1] != 1:
                    c += 1
                if j == w_grid or grid[idx][j + 1] != 1:
                    c += 1
                if idx == l_grid or grid[idx + 1][j] != 1:
                    c += 1
    return c
