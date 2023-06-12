# FOURTH PROJECT IN ALX SWE SECOND SPRINT IN HIGH LEVEL PROGRAMMING

## PYTHON DATA STRUCTURES

This is the way data in python are arranged and how can be manipulated easily and the way can be accessed easily at anytime from anywhere at any position.

## PROJECT TASKS

# MANDATORY

5. Can you C me now?
Write a function that removes all characters c and C from a string.

Prototype: def no_c(my_string):
The function should return the new string
You are not allowed to import any module
You are not allowed to use str.replace()

From the code in my file also this can work where we keep all character in new_string as a list of characters like this below:
```
['B', 'e', 's', 't', ' ', 'S', 'c', 'h', 'o', 'o', 'l']
['h', 'i', 'c', 'a', 'g', 'o']
[' ', 'i', 's', ' ', 'f', 'u', 'n', '!']
```

After we join separated chars to make a word or a sentence:
```
#!/usr/bin/python3


def no_c(my_string):
	new_string = [c for c in my_string if ord(c) != 67 and ord(c) != 99]
	return ("".join(new_string))
```

The output will be:
```
Best Shool
hiago
 is fun!
```
for this main file:
```
\#!/usr/bin/env python3
no_c = __import__('5-no_c').no_c

print(no_c("Best School"))
print(no_c("Chicago"))
print(no_c("C is fun!"))
```

or instead of using ord(char), you can use `if char != 'C' and char != 'c'`

### ADVANCED
