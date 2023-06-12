#!/usr/bin/python3
# A function to print every integer in newline from reversed list.


def print_reversed_list_integer(my_list=[]):
    if isinstance(my_list, list):
        my_list.reverse()
        for num in my_list:
            print("{:d}".format(num))
