# C - Static libraries
A static library is a file containing a collection of object files (*.o) 
that are linked into the program during the linking phase of compilation and are not relevant during runtime

## Note: 
When a program is compiled, the compiler generates an object file from a source file. 
After generating the object file, the compiler also invokes the Linker. 
The role of the linker, in this case, is to copy the code of the library to our object file.
Basically, static libraries are just a collection of object files that are merged by the linker 
with another object file to form a final executable.

Conventionally, they start with “lib” and end with “.a” or “.lib” (depending on your platform).

## Files Created:
* libmy.a
* main.h
* 0-isupper.o
* 0-memset.o
* 0-strcat.o
* 1-isdigit.o
* 1-memcpy.o
* 1-strncat.o
* 100-atoi.o
* 2-strchr.o
* 2-strlen.o
* 2-strncpy.o
* 3-islower.o
* 3-puts.o
* 3-strcmp.o
* 3-strspn.o
* 4-isalpha.o
* 4-strpbrk.o
* 5-strstr.o
* 6-abs.o
* 9-strcpy.o
* _putchar.o

### For more Resources check: https://tinyurl.com/e2tw7wp5
