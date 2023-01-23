/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   superlib.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:12:45 by amait-ou          #+#    #+#             */
/*   Updated: 2023/01/24 00:18:46 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

  You might see some of additional functions (static functions particularly) 
  within some of my c files and those functions are defined as static to not 
  be read by any external files as well as they were made to help have my code
  done.

  Note: I hate using the keyword NULL so you might see (void *)0 alot in my codes

 */

#ifndef SUPERLIB_H
# define SUPERLIB_H

/* Libraries */
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <limits.h>
# include <stdarg.h>

/* Macros  */
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

/* Shortcuts */
typedef unsigned char		t_uc;
typedef unsigned int		t_ui;
typedef unsigned long		t_ul;
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
/* Libft */

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
int		ft_charlen(char *s, int c);
int		ft_strcmp(char *s1, char *s2);

/* Get next line */
char	*get_next_line(int fd);
size_t	string_len(char *s);
char	*char_search(char *s, int c);
char	*string_join(char *s1, char *s2);
char	*get_one_line(char *stash);
char	*free_stash(char *reserve);

/* Ft_printf */
int		ft_printf(const char *s, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_printhex(t_ul address, char *s);
int		ft_putsigned(int nb);
int		ft_putunsigned(t_ui nb);

#endif
