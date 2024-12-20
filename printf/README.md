# 42school Project - ft_printf

This directory contains the implementation of the `ft_printf` project, a custom version of the standard `printf` function, developed as part of the 42 School program. The goal of this project is to recreate `printf`'s functionality while learning about variadic functions, memory management, and efficient data processing.

## Files Overview

### Core Files
- **[ft_chars.c](./ft_chars.c)** — Handles the formatting and printing of character-related data.
- **[ft_digits.c](./ft_digits.c)** — Handles the formatting and printing of numeric data.
- **[ft_hex.c](./ft_hex.c)** — Handles the formatting and printing of hexadecimal data.
- **[ft_printf.c](./ft_printf.c)** — The main implementation of the `ft_printf` function.
- **[ft_printf.h](./ft_printf.h)** — Header file containing function prototypes and macros for `ft_printf`.

### Libft Integration
This project reuses and extends functions from the custom `libft` library:

#### Memory Management
- **[ft_bzero.c](./libft/ft_bzero.c)** — Sets a block of memory to zero.
- **[ft_calloc.c](./libft/ft_calloc.c)** — Allocates memory for an array and initializes it to zero.
- **[ft_memchr.c](./libft/ft_memchr.c)** — Searches for a character in a block of memory.
- **[ft_memcmp.c](./libft/ft_memcmp.c)** — Compares two blocks of memory.
- **[ft_memcpy.c](./libft/ft_memcpy.c)** — Copies a block of memory.
- **[ft_memmove.c](./libft/ft_memmove.c)** — Safely copies overlapping blocks of memory.
- **[ft_memset.c](./libft/ft_memset.c)** — Fills a block of memory with a specified value.

#### String Manipulation
- **[ft_atoi.c](./libft/ft_atoi.c)** — Converts a string to an integer.
- **[ft_itoa.c](./libft/ft_itoa.c)** — Converts an integer to a string.
- **[ft_split.c](./libft/ft_split.c)** — Splits a string into an array of substrings based on a delimiter.
- **[ft_strchr.c](./libft/ft_strchr.c)** — Locates the first occurrence of a character in a string.
- **[ft_strdup.c](./libft/ft_strdup.c)** — Duplicates a string.
- **[ft_striteri.c](./libft/ft_striteri.c)** — Iterates over a string and applies a function to each character.
- **[ft_strjoin.c](./libft/ft_strjoin.c)** — Concatenates two strings.
- **[ft_strlcat.c](./libft/ft_strlcat.c)** — Concatenates strings with size-bounded copying.
- **[ft_strlcpy.c](./libft/ft_strlcpy.c)** — Copies strings with size-bounded copying.
- **[ft_strlen.c](./libft/ft_strlen.c)** — Returns the length of a string.
- **[ft_strmapi.c](./libft/ft_strmapi.c)** — Creates a new string by applying a function to each character of the original string.
- **[ft_strncmp.c](./libft/ft_strncmp.c)** — Compares up to `n` characters of two strings.
- **[ft_strnstr.c](./libft/ft_strnstr.c)** — Locates a substring within a string.
- **[ft_strrchr.c](./libft/ft_strrchr.c)** — Locates the last occurrence of a character in a string.
- **[ft_strtrim.c](./libft/ft_strtrim.c)** — Removes specified characters from the beginning and end of a string.
- **[ft_substr.c](./libft/ft_substr.c)** — Extracts a substring from a string.

#### Character Checks and Conversions
- **[ft_isalnum.c](./libft/ft_isalnum.c)** — Checks if a character is alphanumeric.
- **[ft_isalpha.c](./libft/ft_isalpha.c)** — Checks if a character is alphabetic.
- **[ft_isascii.c](./libft/ft_isascii.c)** — Checks if a character is an ASCII character.
- **[ft_isdigit.c](./libft/ft_isdigit.c)** — Checks if a character is a digit.
- **[ft_isprint.c](./libft/ft_isprint.c)** — Checks if a character is printable.
- **[ft_tolower.c](./libft/ft_tolower.c)** — Converts an uppercase character to lowercase.
- **[ft_toupper.c](./libft/ft_toupper.c)** — Converts a lowercase character to uppercase.

#### File Descriptors
- **[ft_putchar_fd.c](./libft/ft_putchar_fd.c)** — Outputs a character to a specified file descriptor.
- **[ft_putendl_fd.c](./libft/ft_putendl_fd.c)** — Outputs a string followed by a newline to a specified file descriptor.
- **[ft_putnbr_fd.c](./libft/ft_putnbr_fd.c)** — Outputs an integer to a specified file descriptor.
- **[ft_putstr_fd.c](./libft/ft_putstr_fd.c)** — Outputs a string to a specified file descriptor.

#### Linked List Functions (Bonus)
- **[ft_lstadd_back_bonus.c](./libft/ft_lstadd_back_bonus.c)** — Adds an element to the end of a linked list.
- **[ft_lstadd_front_bonus.c](./libft/ft_lstadd_front_bonus.c)** — Adds an element to the beginning of a linked list.
- **[ft_lstclear_bonus.c](./libft/ft_lstclear_bonus.c)** — Clears all elements from a linked list.
- **[ft_lstdelone_bonus.c](./libft/ft_lstdelone_bonus.c)** — Deletes a single element of a linked list.
- **[ft_lstiter_bonus.c](./libft/ft_lstiter_bonus.c)** — Iterates over a linked list and applies a function to each element.
- **[ft_lstlast_bonus.c](./libft/ft_lstlast_bonus.c)** — Returns the last element of a linked list.
- **[ft_lstmap_bonus.c](./libft/ft_lstmap_bonus.c)** — Applies a function to each element of a linked list and creates a new list.
- **[ft_lstnew_bonus.c](./libft/ft_lstnew_bonus.c)** — Creates a new linked list element.
- **[ft_lstsize_bonus.c](./libft/ft_lstsize_bonus.c)** — Returns the size of a linked list.

### Supporting Files
- **[libft.h](./libft/libft.h)** — Header file containing function prototypes and necessary includes for the library.
- **[Makefile](./libft/Makefile)** — Automates the compilation process of the library.
- **[Makefile](./Makefile)** — Automates the compilation process for `ft_printf`.
