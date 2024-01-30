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
|____sources
| |______*.c
|____Makefile
|____README.md
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