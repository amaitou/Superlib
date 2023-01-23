
NAME = superlib.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar

CFILES = ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_calloc.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstadd_back.c \
		ft_lstmap.c \
		ft_lstiter.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstsize.c \
		get_next_line.c \
		get_next_line_utils.c \
		ft_printf.c \
		ft_printhex.c \
		ft_putchar.c \
		ft_putsigned.c \
		ft_putstr.c \
		ft_putunsigned.c \
		ft_charlen.c \
		ft_strcmp.c

SOURCES = $(CFILES:.c=.o)

%.o: %.c
	@echo "\033[0;33m[*] compiling $?\033[0m"
	@$(CC) $(CFLAGS) -c $?

all: $(NAME)

$(NAME): $(SOURCES)
	@echo "\033[0;32m[+] archiving *.o onto superlib.a\033[0m"
	@$(AR) rcs $@ $?

clean:
	@echo "\033[1;31m[!] deleting *.o\033[0m"
	@rm -f $(SOURCES)

fclean: clean
	@echo "\033[1;31m[!] deleting superlib.a and *.o\033[0m"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
