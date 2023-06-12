#!/usr/bin/python3
# A function to delete a letter in a string to return new one.


def no_c(my_string):
    newstr = ""
    for c in my_string:
        if ord(c) != 67 and ord(c) != 99:
            newstr += c
    return (newstr)
