# 0x11. C - printf 

- The goal is writing our own `printf` function, this is a project done for [ALX Low Level Programming](https://github.com/AmrEwais/alx-low_level_programming)
## Description

- The function `_printf` writes output to stdout. The function writes under the control of a `format` string that specifies how subsequent arguments (accessed via the variable-length argument facilities of standard library `stdarg`) are converted for output.

- Prototype: `int _printf(const char *format, ...);`


## ALX General Requirements

- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line.
- No more than 5 functions per file.
- You are not allowed to use global variables.
- The prototypes of all your functions should be included in your header file called `holberton.h`
- All your header files should be include guarded.

### Authorized functions and macros

- `write` (`man 2 write`)
- `malloc` (`man 3 malloc`)
- `free` (`man 3 free`)
- `va_start` (`man 3 va_start`)
- `va_end` (`man 3 va_end`)
- `va_copy` (`man 3 va_copy`)
- `va_arg` (`man 3 va_arg`)

### Github

- There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.

### Compilation

Alx main files will include your main header file (main.h): #include main.h
- Our code can be compiled like this just for testing:
	```sh
	gcc -Wall -Werror -Wextra -pedantic -std=gnu89 test/main.c *.c -o print
	```
- All test files in [test](./test) directory.


## Authors

- Amr Ewais [@AmrEwais](https://github.com/AmrEwais)
- Youssef Aboelwafa [@YoussefAboelwafa](https://github.com/YoussefAboelwafa)

