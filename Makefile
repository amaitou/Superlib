
NAME = superlib.a
CFLAGS = -Wall -Wextra -Werror
INCLUDE_DIR = ./includes
SOURCE_DIR = ./sources
CC = cc
AR = ar

CFILES = $(wildcard $(SOURCE_DIR)/*/*.c)

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
	@rm -rf $(SOURCES) *.out

fclean: clean
	@echo "\033[1;31m[!] deleting superlib.a and *.o\033[0m"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
