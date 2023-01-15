
NAME = superlib.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -I includes
HEADER = ./includes/superlib.h
SRC = sources/validators/ft_isalpha.c \
		sources/validators/ft_isdigit.c \
		sources/validators/ft_isalnum.c \
		sources/validators/ft_isascii.c \
		sources/validators/ft_isprint.c \
		sources/memory/ft_memset.c \
		sources/memory/ft_bzero.c \
		sources/memory/ft_memcpy.c \
		sources/memory/ft_memmove.c \
		sources/memory/ft_memchr.c \
		sources/memory/ft_memcmp.c \
		sources/memory/ft_calloc.c \
		sources/strings/ft_strlen.c \
		sources/strings/ft_strlcpy.c \
		sources/strings/ft_strlcat.c \
		sources/strings/ft_toupper.c \
		sources/strings/ft_tolower.c \
		sources/strings/ft_strchr.c \
		sources/strings/ft_strrchr.c \
		sources/strings/ft_strncmp.c \
		sources/strings/ft_strnstr.c \
		sources/strings/ft_atoi.c \
		sources/strings/ft_strdup.c \
		sources/strings/ft_substr.c \
		sources/strings/ft_strjoin.c \
		sources/strings/ft_strtrim.c \
		sources/strings/ft_split.c \
		sources/strings/ft_itoa.c \
		sources/strings/ft_strmapi.c \
		sources/strings/ft_striteri.c \
		sources/file_descriptors/ft_putchar_fd.c \
		sources/file_descriptors/ft_putstr_fd.c \
		sources/file_descriptors/ft_putendl_fd.c \
		sources/file_descriptors/ft_putnbr_fd.c \
		sources/linked_lists/ft_lstnew.c \
		sources/linked_lists/ft_lstadd_front.c \
		sources/linked_lists/ft_lstadd_back.c \
		sources/linked_lists/ft_lstmap.c \
		sources/linked_lists/ft_lstiter.c \
		sources/linked_lists/ft_lstsize.c \
		sources/linked_lists/ft_lstlast.c \
		sources/linked_lists/ft_lstclear.c \
		sources/linked_lists/ft_lstdelone.c \
		sources/linked_lists/ft_lstsize.c \
		sources/get_next_line/get_next_line.c \
		sources/get_next_line/get_next_line_utils.c \
		sources/ft_printf/ft_printf.c \
		sources/ft_printf/ft_printhex.c \
		sources/ft_printf/ft_putchar.c \
		sources/ft_printf/ft_putsigned.c \
		sources/ft_printf/ft_putstr.c \
		sources/ft_printf/ft_putunsigned.c

OBJ = $(SRC:sources/%.c=objects/%.o)
MKDIR_P = mkdir -p

# OBJECT_FILES = $(SOURCES:sources%.c=objects%.o)

all: MAKE_DIR $(NAME)

MAKE_DIR:
	@mkdir -p objects
	@mkdir -p objects/validators objects/strings/ objects/memory objects/file_descriptors objects/validators objects/linked_lists objects/get_next_line objects/ft_printf

$(NAME): $(OBJ)
	@echo "\033[0;32m[+] archiving *.o onto superlib.a\033[0m"
	@$(AR) rcs $@ $?

objects/%.o : sources/%.c $(header)
	@echo "\033[0;33m[*] compiling $?\033[0m"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "\033[1;31m[!] deleting *.o\033[0m"
	@rm -f $(OBJ)
fclean: clean
	@echo "\033[1;31m[!] deleting superlib.a and *.o\033[0m"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
