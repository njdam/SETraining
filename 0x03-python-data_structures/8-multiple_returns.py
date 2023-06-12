#!/usr/bin/python3
# A function to return a tuple with length of string and first letter of it.


def multiple_returns(sentence):
    if len(sentence) == 0:
        my_tuple = (0, "None")

    else:
        length = len(sentence)
        first = sentence[0]
        my_tuple = (length, first)

    return (my_tuple)
