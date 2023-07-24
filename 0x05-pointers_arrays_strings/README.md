# C - Pointers, arrays and strings
A pointer is a variable which contains a memory address.

## Types and memory
Every time you declare a variable, the computer will reserve memory for this variable. The memory reserved will then store the value of the variable.
Depending on the type of the variable, the computer will reserve more or less memory. The size of each type is generally defined in bytes (1 byte = 8 bits, each bit being 0 or 1). The sizes of the types also depend on the computer you are using. Here are the sizes of the most common types on most 64-bit Linux machines:

char -> 1 byte
int -> 4 bytes
float -> 4 bytes

## Storing memory addresses

You can use %p to print addresses (the values of pointers) with printf
In order to know what is the address of a variable, you can use the “address-of unary operator” &.
Now that we know how to get an address, we can store it in a… pointer! :)
A pointer is simply the address of a piece of data in memory. A pointer variable is a variable that stores the address of that piece of data. Like any other variable it needs to be declared. General form is:
var_type *var;

The * tells that the variable var is a pointer…
… that points to a var_type.
The value of var will be a memory address holding a value of type var_type
int *ptr;  
In this example, ptr is the name of the variable, of type “pointer to an integer”. Anything that is on the left of the last * before the name of the variable will give you the type that the pointer points to.

### For more read: Check

* https://intranet.alxswe.com/concepts/60
* https://intranet.alxswe.com/concepts/120
