---
![75068-Karl-Marx-Quote-In-the-eyes-of-dialectical-philosophy-nothing-is](https://user-images.githubusercontent.com/49293816/212522005-44f5edb4-cf63-4b64-819e-d2c168924044.jpeg)

---

# Superlib

"`Superlib`" is a static C library designed to empower your programming endeavors. This library boasts an extensive array of functions covering diverse domains, including string manipulation, memory management and manipulation, mathematical operations, data structure operations, file handling, and more. `Superlib` stands as a versatile and reliable resource, streamlining your development tasks and offering a comprehensive toolkit for a wide range of programming challenges.

---

# Usage

- Compile the library using

```sh
make
```

- Link the library with your project

```sh
gcc <name>.c superlib.a
```

# Library Structure

```sh
|____includes
| |____superlib.h
|____Makefile
|____README.md
|____sources
| |____checkers
| | |____ft_isalnum.c
| | |____ft_isalpha.c
| | |____ft_isascii.c
| | |____ft_isdigit.c
| | |____ft_isprime.c
| | |____ft_isprint.c
| |____doubly_linkedlist
| | |____ft_lstdadd_back.c
| | |____ft_lstdadd_front.c
| | |____ft_lstdclear.c
| | |____ft_lstddelone.c
| | |____ft_lstditer.c
| | |____ft_lstdlast.c
| | |____ft_lstdnew.c
| | |____ft_lstdsize.c
| |____file_io
| | |____ft_putchar_fd.c
| | |____ft_putendl_fd.c
| | |____ft_putnbr_fd.c
| | |____ft_putstr_fd.c
| |____ft_printf
| | |____ft_printf.c
| | |____ft_printhex.c
| | |____ft_putchar.c
| | |____ft_putsigned.c
| | |____ft_putstr.c
| | |____ft_putunsigned.c
| |____line_reading
| | |____get_next_line.c
| | |____get_next_line_utils.c
| |____math_operations
| | |____ft_pow.c
| | |____ft_sqrt.c
| | |____ft_swap.c
| |____memory_management
| | |____ft_bzero.c
| | |____ft_calloc.c
| | |____ft_memchr.c
| | |____ft_memcmp.c
| | |____ft_memcpy.c
| | |____ft_memmove.c
| | |____ft_memset.c
| |____singly_linkedlist
| | |____ft_lstadd_back.c
| | |____ft_lstadd_front.c
| | |____ft_lstclear.c
| | |____ft_lstdelone.c
| | |____ft_lstiter.c
| | |____ft_lstlast.c
| | |____ft_lstmap.c
| | |____ft_lstnew.c
| | |____ft_lstsize.c
| |____string_manipulation
| | |____ft_atoi.c
| | |____ft_charlen.c
| | |____ft_itoa.c
| | |____ft_split.c
| | |____ft_strchr.c
| | |____ft_strcmp.c
| | |____ft_strdup.c
| | |____ft_striteri.c
| | |____ft_strjoin.c
| | |____ft_strlcat.c
| | |____ft_strlcpy.c
| | |____ft_strlen.c
| | |____ft_strmapi.c
| | |____ft_strncmp.c
| | |____ft_strnstr.c
| | |____ft_strrchr.c
| | |____ft_strtrim.c
| | |____ft_substr.c
| | |____ft_tolower.c
| | |____ft_toupper.c
| |____vector_container
| | |____allocate_v.c
| | |____back_v.c
| | |____begin_v.c
| | |____capacity_v.c
| | |____clear_v.c
| | |____create_v.c
| | |____empty_v.c
| | |____end_v.c
| | |____free_v.c
| | |____front_v.c
| | |____get_v.c
| | |____pop_v.c
| | |____push_v.c
| | |____size_v.c
|____.gitignore
```

---

# Example

```c
#include "./includes/superlib.h"

int main(void)
{
	char	**p;
	size_t	i;

	p = ft_split("Hello From Superlib library", ' ');
	i = 0;
	if (!p)
		return (EXIT_FAILURE);
	while (p[i])
	{
		ft_printf("[%d] - %s\n", i, p[i]);
		++i;
	}
	return (EXIT_SUCCESS);

	/*
	[0] - Hello
	[1] - From
	[2] - Superlib
	[3] - library
	*/
}
```

> Please don't hesitate to report any issues as well as feel free to contribute in any way to this project. Your involvement is greatly appreciated!

---

### **Contact Me**

* [Twitter][_1]

[_1]: https://twitter.com/amait0u

