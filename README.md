*This activity has been created as part of the 42 curriculum by aabuward.*

# libft

## Description

`libft` is a C static library that re-implements a set of standard C library functions and adds extra utility functions. The goal is to understand how these functions work internally, and to build a personal toolbox reused in later 42 projects.

To work on this project, we needed to learn:

1. Makefiles
2. `malloc`, `calloc`, and memory management
3. Pointers
4. Linked lists (data structures)
5. Other functions and concepts applicable to this project

Every source file is compiled into an object file, then all object files are archived into one library:

```
ft_strlen.c ──► ft_strlen.o ──┐
ft_memset.c ──► ft_memset.o ──┼──► libft.a
ft_atoi.c   ──► ft_atoi.o   ──┘
         ...          ...
```

## Library

The library `libft.a` contains:

- **Libc functions:** `ft_strlen`, `ft_memset`, `ft_memcpy`, `ft_strlcpy`, `ft_strchr`, `ft_strncmp`, `ft_atoi`, `ft_calloc`, `ft_strdup`, `ft_isalpha`, `ft_toupper`, etc. They re-implement the behavior of the original functions.
- **Additional functions:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_putstr_fd`, etc.
- **Linked list :** `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

All prototypes are declared in `libft.h`.

## Instructions

### Compilation

```bash
git clone git@github.com:42learners/Common-Core---Libft-cc36bbdf-b3dd-46d4-8743-4d09a18c68b2.git
cd Common-Core---Libft-cc36bbdf-b3dd-46d4-8743-4d09a18c68b2
make
```

This produces `libft.a` at the root of the repository.

### Available Makefile rules

- `make` / `make all`: Compiles the sources and builds `libft.a`
- `make clean`: Removes the object files (`.o`)
- `make fclean`: Removes the object files and `libft.a`
- `make re`: Runs `fclean` then `all`

### Usage

Include the header in any file that uses the library functions:

```c
#include "libft.h"
```

Then compile and link your program:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

- `-L.` tells the compiler to look for libraries in the current directory.
- `-lft` links against `libft.a` (the `lib` prefix and the `.a` extension are implied).

## Resources

- [GeeksforGeeks](https://www.geeksforgeeks.org/)
- [Stack Overflow](https://stackoverflow.com/)
- [W3Schools](https://www.w3schools.com/)
- Manual pages (`man`) for the built-in functions being re-implemented

### AI usage

- **Claude (AI):** used for each function to review the edge cases, and to debug errors and bugs.
- **AI:** used to organize and format this `README.md` file.

