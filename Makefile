##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC =	src/main.c			\
		src/errorhandler.c

TESTS =

BUILD_DIR = build
OBJ = $(SRC:%.c=$(BUILD_DIR)/%.o)
CC = gcc
CFLAGS = -I include/ -L./lib -lmy
DFLAGS = -W -Wall
NAME =

.PHONY: lib clean

all: lib $(NAME)

$(BUILD_DIR)/%.o: %.c
					@mkdir -p $(@D)
					@echo "  CC       $<"
					@$(CC) $(CFLAGS) -c $< -o $@

lib:
			make -C lib/my/

$(NAME): $(OBJ)
			@echo "\n\n\n\033[92mCompiling a Common Project.\033[0m\n\n\n"
			gcc $(DFLAGS) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
			rm -f $(OBJ)
			rm -f *.gcda
			rm -f *.gcno

fclean: clean
			rm -f $(NAME)
			rm -f unit_tests
			rm -f *.gcda
			rm -f *.gcno
			clear

unit_tests: fclean
			gcc -o unit_tests $(SRC) $(TESTS) --coverage -lcriterion

run_tests: unit_tests
			./unit_tests

pushgit: fclean
			clear
			git add -A
			git commit -m "$(filter-out $@, $(MAKECMDGOALS))"
			git push

re: fclean $(NAME)
