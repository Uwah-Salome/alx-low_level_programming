0x0C. C - More malloc, free
===========================

-   By Julien Barbier
-   Weight: 1
-   Ongoing second chance project - started 09-23-2021, must end by 09-25-2021 (in about 16 hours) - you're done with 0% of tasks.
-   QA review fully automated.

#### In a nutshell...

-   **Auto QA review:** 0.0/36 mandatory & 0.0/21 optional
-   **Altogether:**  **0.0%**
    -   Mandatory: 0.0%
    -   Optional: 0.0%
    -   Calculation:  0.0% + (0.0% * 0.0%)  == **0.0%**

Concepts
--------

*For this project, students are expected to look at this concept:*

-   [Automatic and dynamic allocation, malloc and free](https://alx-intranet.hbtn.io/concepts/62)

Resources
---------

**Read or watch**:

-   [Do I cast the result of malloc?](https://alx-intranet.hbtn.io/rltoken/uKhvfzpF3v8Be10NCZlQtA "Do I cast the result of malloc?")

**man or help**:

-   `exit (3)`
-   `calloc`
-   `realloc`

Learning Objectives
-------------------

At the end of this project, you are expected to be able to [explain to anyone](https://alx-intranet.hbtn.io/rltoken/UzyOEQw26ytlKDLQq7AGXw "explain to anyone"), **without the help of Google**:

### General

-   How to use the `exit` function
-   What are the functions `calloc` and `realloc` from the standard library and how to use them

Requirements
------------

### General

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project is mandatory
-   Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc... is forbidden
-   You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c "_putchar")
-   You don't have to push `_putchar.c`, we will use our file. If you do it won't be taken into account
-   In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
-   The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
-   Don't forget to push your header file

--

### 4\. _realloc

#advanced

Score: 0.00% (Checks completed: 0.00%)

Write a function that reallocates a memory block using `malloc` and `free`

-   Prototype: `void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);`
-   where `ptr` is a pointer to the memory previously allocated with a call to `malloc`: `malloc(old_size)`
-   `old_size` is the size, in bytes, of the allocated space for `ptr`
-   and `new_size` is the new size, in bytes of the new memory block
-   The contents will be copied to the newly allocated space, in the range from the start of `ptr` up to the minimum of the old and new sizes
-   If `new_size` > `old_size`, the "added" memory should not be initialized
-   If `new_size` == `old_size` do not do anything and return `ptr`
-   If `ptr` is `NULL`, then the call is equivalent to `malloc(new_size)`, for all values of `old_size` and `new_size`
-   If `new_size` is equal to zero, and `ptr` is not `NULL`, then the call is equivalent to `free(ptr)`. Return `NULL`
-   Don't forget to free `ptr` when it makes sense

FYI: The standard library provides a different function: `realloc`. Run `man realloc` to learn more.

```
julien@ubuntu:~/0x0b. more malloc, free$ cat 100-main.c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char *p;
    int i;

    p = malloc(sizeof(char) * 10);
    p = _realloc(p, sizeof(char) * 10, sizeof(char) * 98);
    i = 0;
    while (i < 98)
    {
        p[i++] = 98;
    }
    simple_print_buffer(p, 98);
    free(p);
    return (0);
}
julien@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-realloc.c -o 100-realloc
julien@ubuntu:~/0x0b. more malloc, free$ ./100-realloc
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
julien@ubuntu:~/0x0b. more malloc, free$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0C-more_malloc_free`
-   File: `100-realloc.c`

### 5\. We must accept finite disappointment, but never lose infinite hope

#advanced

Score: 0.00% (Checks completed: 0.00%)

Write a program that multiplies two positive numbers.

-   Usage: `mul num1 num2`
-   `num1` and `num2` will be passed in base 10
-   Print the result, followed by a new line
-   If the number of arguments is incorrect, print `Error`, followed by a new line, and exit with a status of `98`
-   `num1` and `num2` should only be composed of digits. If not, print `Error`, followed by a new line, and exit with a status of `98`
-   You are allowed to use more than 5 functions in your file

You can use `bc` (`man bc`) to check your result.
