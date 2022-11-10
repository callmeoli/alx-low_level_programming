#!/usr/bin/python3
"""
5 island permeter
"""
def island_perimeter(grid):
    """ claculate the area of """
    count = 0
    for i in grid:
        for j in i:
            if j == 1:
                count = count + 1
    if count > 2:
        PI = (count - 2) * 2
        PO = 2 * 3
        perimeter  = PI + PO
        return perimeter
    elif count == 1:
        return 4
    elif count == 0:
        return 0
    elif count == 2:
        return 6
