#!/usr/bin/python3
""" island_perimeter Module """


def island_perimeter(grid):
    """island_ma Method"""

    perim = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                perim += 4

                if grid[i][j - 1] == 1 and j > 0:
                    perim -= 1
                if grid[i - 1][j] == 1 and i > 0:
                    perim -= 1
                if grid[i][j + 1] == 1 and j < len(grid[i]) - 1:
                    perim -= 1
                if grid[i + 1][j] == 1 and i < len(grid) - 1:
                    perim -= 1

    return perim
