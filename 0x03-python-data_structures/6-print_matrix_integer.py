#!/usr/bin/python3
# A function to print a matrix of integers


def print_matrix_integer(matrix=[[]]):
    for y in matrix:
        for x in y:
            print("{:d}".format(x), end=" " if x != y[-1] else "")
        print()
