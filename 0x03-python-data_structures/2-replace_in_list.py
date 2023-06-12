#!/usr/bin/python3
# A function to replace an element at index in list.


def replace_in_list(my_list, idx, element):
    lens = len(my_list)
    if idx < 0 or idx >= lens:
        return (my_list)
    else:
        my_list[idx] = element
        return (my_list)
