#!/usr/bin/python3
# A function to replace an element in a list without modifying origin.


def new_in_list(my_list, idx, element):
    cplist = my_list.copy()
    lens = len(cplist)

    if idx < 0 or idx >= lens:
        return (cplist)
    else:
        cplist[idx] = element
        return (cplist)
