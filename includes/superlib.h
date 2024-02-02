/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   superlib.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:12:45 by amait-ou          #+#    #+#             */
/*   Updated: 2024/02/02 11:03:27 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

  You might see some of additional functions (static functions particularly)
  within some of my c files and those functions are defined as static to not
  be read by any external files as well as they were made to help have my code
  done.

  Note: I hate using the keyword NULL so you might see \
	(void *)0 or (void *)0x00 a lot in my codes

 */

#ifndef SUPERLIB_H
# define SUPERLIB_H

/* Libraries */
# include <limits.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

/* Macros  */
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

/* Shortcuts */
typedef unsigned char	t_uc;
typedef unsigned int	t_ui;
typedef unsigned long	t_ul;

/* Singly Linked List Structure */
typedef struct s_list
{
	void				*content;
	struct s_list		*next;
}						t_list;

/* Doubly Linked List Structure */
typedef struct s_dlist
{
	void				*content;
	struct s_dlist		*next;
	struct s_dlist		*prev;
}						t_dlist;

/* __Cvector_ Structure */
typedef struct s_vector
{
	size_t				size;
	size_t				capacity;
	void				**vector;
}						t_vector;

/* Libft */
int32_t					ft_isalpha(int32_t c);
int32_t					ft_isdigit(int32_t c);
int32_t					ft_isalnum(int32_t c);
int32_t					ft_isascii(int32_t c);
int32_t					ft_isprint(int32_t c);
size_t					ft_strlen(const char *s);
void					*ft_memset(void *b, int32_t c, size_t len);
void					ft_bzero(void *s, size_t n);
void					*ft_memcpy(void *dst, const void *src, size_t n);
void					*ft_memmove(void *dst, const void *src, size_t len);
size_t					ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t					ft_strlcat(char *dst, const char *src, size_t dstsize);
int32_t					ft_toupper(int32_t c);
int32_t					ft_tolower(int32_t c);
char					*ft_strchr(const char *s, int32_t c);
char					*ft_strrchr(const char *s, int32_t c);
int32_t					ft_strncmp(const char *s1, const char *s2, size_t n);
void					*ft_memchr(const void *s, int32_t c, size_t n);
int32_t					ft_memcmp(const void *s1, const void *s2, size_t n);
char					*ft_strnstr(const char *haystack, const char *needle,
							size_t len);
int32_t					ft_atoi(const char *str);
void					*ft_calloc(size_t count, size_t size);
char					*ft_strdup(const char *s1);
char					*ft_substr(char const *s, t_ui start, size_t len);
char					*ft_strjoin(char const *s1, char const *s2);
char					**ft_split(char const *s, char c);
char					*ft_strmapi(char const *s, char (*f)(t_ui, char));
void					ft_striteri(char *s, void (*f)(t_ui, char *));
void					ft_putchar_fd(char c, int32_t fd);
void					ft_putstr_fd(char *s, int32_t fd);
void					ft_putendl_fd(char *s, int32_t fd);
void					ft_putnbr_fd(int32_t n, int32_t fd);
char					*ft_strtrim(char const *s1, char const *set);
char					*ft_itoa(int32_t n);
int32_t					ft_charlen(char *s, int32_t c);
int32_t					ft_strcmp(char *s1, char *s2);

/* Singly Linked List */
t_list					*ft_lstnew(void *content);
void					ft_lstadd_front(t_list **lst, t_list *new);
int32_t					ft_lstsize(t_list *lst);
t_list					*ft_lstlast(t_list *lst);
void					ft_lstadd_back(t_list **lst, t_list *new);
void					ft_lstdelone(t_list *lst, void (*del)(void *));
void					ft_lstclear(t_list **lst, void (*del)(void *));
void					ft_lstiter(t_list *lst, void (*f)(void *));
t_list					*ft_lstmap(t_list *lst, void *(*f)(void *),
							void (*del)(void *));

/* Doubly Linked List */
t_dlist					*ft_lstdnew(void *content);
t_dlist					*ft_lstdlast(t_dlist *lst);
size_t					ft_lstdsize(t_dlist *lst);
void					ft_lstdadd_back(t_dlist **lst, t_dlist *new);
void					ft_lstdadd_front(t_dlist **lst, t_dlist *new);
void					ft_lstdclear(t_dlist **lst, void (*del)(void *));
void					ft_lstddelone(t_dlist *lst, void (*del)(void *));
void					ft_lstditer(t_dlist *lst, void (*f)(void *));

/* Get next line */
char					*get_next_line(int32_t fd);
size_t					string_len(char *s);
char					*char_search(char *s, int32_t c);
char					*string_join(char *s1, char *s2);
char					*get_one_line(char *stash);
char					*free_stash(char *reserve);

/* Ft_printf */
int32_t					ft_printf(const char *s, ...);
int32_t					ft_putchar(char c);
int32_t					ft_putstr(char *s);
int32_t					ft_printhex(t_ul address, char *s);
int32_t					ft_putsigned(int32_t nb);
int32_t					ft_putunsigned(t_ui nb);

/* __Cvector */
void					**__begin_v(t_vector *vector);
void					**__end_v(t_vector *vector);
t_vector				*__create_v(void);
t_vector				*__allocate_v(size_t size_t);
void					*__get_v(t_vector *vector, size_t index);
void					*__front_v(t_vector *vector);
void					*__back_v(t_vector *vector);
void					__free_v(t_vector *vector);
int32_t					__empty_v(t_vector *vector);
int32_t					__push_v(t_vector **vector, void *value, size_t size);
int32_t					__pop_v(t_vector *vector);
int32_t					__clear_v(t_vector *vector);
size_t					__size_v(t_vector *vector);
size_t					__capacity_v(t_vector *vector);

/* Math Functions */
size_t					ft_pow(int32_t nb, int32_t power);
size_t					ft_isprime(int32_t nb);
size_t					ft_sqrt(int32_t nb);

/* Other Functions */
void					ft_swap(void **a, void **b);

#endif
