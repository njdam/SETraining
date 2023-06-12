#!/usr/bin/python3
# A program to print integers in a list one in each linei


def print_list_integer(my_list=[]):
    lens = len(my_list)
    for i in range(lens):
        print("{:d}".format(my_list[i]))
