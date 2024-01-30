
NAME = superlib.a
CFLAGS = -Wall -Wextra -Werror
CC = cc
AR = ar

CFILES = ./sources/ft_isalpha.c \
		./sources/ft_isdigit.c \
		./sources/ft_isalnum.c \
		./sources/ft_isascii.c \
		./sources/ft_isprint.c \
		./sources/ft_memset.c \
		./sources/ft_bzero.c \
		./sources/ft_memcpy.c \
		./sources/ft_memmove.c \
		./sources/ft_memchr.c \
		./sources/ft_memcmp.c \
		./sources/ft_calloc.c \
		./sources/ft_strlen.c \
		./sources/ft_strlcpy.c \
		./sources/ft_strlcat.c \
		./sources/ft_toupper.c \
		./sources/ft_tolower.c \
		./sources/ft_strchr.c \
		./sources/ft_strrchr.c \
		./sources/ft_strncmp.c \
		./sources/ft_strnstr.c \
		./sources/ft_atoi.c \
		./sources/ft_strdup.c \
		./sources/ft_substr.c \
		./sources/ft_strjoin.c \
		./sources/ft_strtrim.c \
		./sources/ft_split.c \
		./sources/ft_itoa.c \
		./sources/ft_strmapi.c \
		./sources/ft_striteri.c \
		./sources/ft_putchar_fd.c \
		./sources/ft_putstr_fd.c \
		./sources/ft_putendl_fd.c \
		./sources/ft_putnbr_fd.c \
		./sources/ft_lstnew.c \
		./sources/ft_lstadd_front.c \
		./sources/ft_lstadd_back.c \
		./sources/ft_lstmap.c \
		./sources/ft_lstiter.c \
		./sources/ft_lstsize.c \
		./sources/ft_lstlast.c \
		./sources/ft_lstclear.c \
		./sources/ft_lstdelone.c \
		./sources/ft_lstsize.c \
		./sources/get_next_line.c \
		./sources/get_next_line_utils.c \
		./sources/ft_printf.c \
		./sources/ft_printhex.c \
		./sources/ft_putchar.c \
		./sources/ft_putsigned.c \
		./sources/ft_putstr.c \
		./sources/ft_putunsigned.c \
		./sources/ft_charlen.c \
		./sources/ft_strcmp.c \
		./sources/__cvector_utils_.c \
		./sources/__cvector_utils__.c \
		./sources/__cvector_utils___.c \
		./sources/ft_swap.c \
		./sources/ft_pow.c \
		./sources/ft_isprime.c \
		./sources/ft_sqrt.c

INCLUDE_DIR = ./includes
SOURCE_DIR = ./sources

SOURCES = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(SOURCES)
	@echo "\033[0;32m[+] archiving *.o onto superlib.a\033[0m"
	@$(AR) rcs $@ $^

./$(SOURCE_DIR)/%.o: $(SOURCE_DIR)/%.c ./$(INCLUDE_DIR)/superlib.h
	@echo "\033[0;33m[*] compiling $?\033[0m"
	@$(CC) $(CFLAGS) $< -c -o $@

clean:
	@echo "\033[1;31m[!] deleting *.o\033[0m"
	@rm -rf $(SOURCE_DIR)/*.o

fclean: clean
	@echo "\033[1;31m[!] deleting superlib.a and *.o\033[0m"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
