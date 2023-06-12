#!/usr/bin/python3
# A function to retrives an element from a list like in C


def element_at(my_list, idx):
    lens = len(my_list)
    if idx < 0 or idx >= lens:
        return (None)
    else:
        return (my_list[idx])
