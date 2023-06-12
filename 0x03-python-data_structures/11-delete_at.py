#!/usr/bin/python3
# A function to delete item at specific position in a list.


def delete_at(my_list=[], idx=0):
    if idx < 0 or idx >= len(my_list):
        return (my_list)
    else:
        del my_list[idx]
        return (my_list)
