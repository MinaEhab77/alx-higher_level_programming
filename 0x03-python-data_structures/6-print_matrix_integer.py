#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    for column in matrix:
        print(' '.join('{:d}'.format(column)for column in row))
