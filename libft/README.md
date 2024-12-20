# 42school Project - Libft

This directory contains the implementation of the `libft` project, a custom C library developed as part of the 42 School program. The goal of this project is to recreate essential C library functions and extend them with additional utilities to build a personal library for future projects.

## Files Overview

### Memory Management
- **[ft_bzero.c](./ft_bzero.c)** — Sets a block of memory to zero.
- **[ft_calloc.c](./ft_calloc.c)** — Allocates memory for an array and initializes it to zero.
- **[ft_memchr.c](./ft_memchr.c)** — Searches for a character in a block of memory.
- **[ft_memcmp.c](./ft_memcmp.c)** — Compares two blocks of memory.
- **[ft_memcpy.c](./ft_memcpy.c)** — Copies a block of memory.
- **[ft_memmove.c](./ft_memmove.c)** — Safely copies overlapping blocks of memory.
- **[ft_memset.c](./ft_memset.c)** — Fills a block of memory with a specified value.

### String Manipulation
- **[ft_atoi.c](./ft_atoi.c)** — Converts a string to an integer.
- **[ft_itoa.c](./ft_itoa.c)** — Converts an integer to a string.
- **[ft_split.c](./ft_split.c)** — Splits a string into an array of substrings based on a delimiter.
- **[ft_strchr.c](./ft_strchr.c)** — Locates the first occurrence of a character in a string.
- **[ft_strdup.c](./ft_strdup.c)** — Duplicates a string.
- **[ft_striteri.c](./ft_striteri.c)** — Iterates over a string and applies a function to each character.
- **[ft_strjoin.c](./ft_strjoin.c)** — Concatenates two strings.
- **[ft_strlcat.c](./ft_strlcat.c)** — Concatenates strings with size-bounded copying.
- **[ft_strlcpy.c](./ft_strlcpy.c)** — Copies strings with size-bounded copying.
- **[ft_strlen.c](./ft_strlen.c)** — Returns the length of a string.
- **[ft_strmapi.c](./ft_strmapi.c)** — Creates a new string by applying a function to each character of the original string.
- **[ft_strncmp.c](./ft_strncmp.c)** — Compares up to `n` characters of two strings.
- **[ft_strnstr.c](./ft_strnstr.c)** — Locates a substring within a string.
- **[ft_strrchr.c](./ft_strrchr.c)** — Locates the last occurrence of a character in a string.
- **[ft_strtrim.c](./ft_strtrim.c)** — Removes specified characters from the beginning and end of a string.
- **[ft_substr.c](./ft_substr.c)** — Extracts a substring from a string.

### Character Checks and Conversions
- **[ft_isalnum.c](./ft_isalnum.c)** — Checks if a character is alphanumeric.
- **[ft_isalpha.c](./ft_isalpha.c)** — Checks if a character is alphabetic.
- **[ft_isascii.c](./ft_isascii.c)** — Checks if a character is an ASCII character.
- **[ft_isdigit.c](./ft_isdigit.c)** — Checks if a character is a digit.
- **[ft_isprint.c](./ft_isprint.c)** — Checks if a character is printable.
- **[ft_tolower.c](./ft_tolower.c)** — Converts an uppercase character to lowercase.
- **[ft_toupper.c](./ft_toupper.c)** — Converts a lowercase character to uppercase.

### File Descriptors
- **[ft_putchar_fd.c](./ft_putchar_fd.c)** — Outputs a character to a specified file descriptor.
- **[ft_putendl_fd.c](./ft_putendl_fd.c)** — Outputs a string followed by a newline to a specified file descriptor.
- **[ft_putnbr_fd.c](./ft_putnbr_fd.c)** — Outputs an integer to a specified file descriptor.
- **[ft_putstr_fd.c](./ft_putstr_fd.c)** — Outputs a string to a specified file descriptor.

### Supporting Files
- **[libft.h](./libft.h)** — Header file containing function prototypes and necessary includes for the library.
- **[Makefile](./Makefile)** — Automates the compilation process of the library.
