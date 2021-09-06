##
## EPITECH PROJECT, 2020
## Exiel Makefile
## File description:
## The Makefile created by Exiel for his projects
##

SRC =	src/main.c					\
		src/errorhandler.c			\
		src/init_config.c			\
		src/init_struct.c			\
		src/utils.c					\
		src/opthandler.c			\
\
		src/init_ehg/init_ehg.c		\
\
		src/lib_handler/lib_utils.c	\
\
		src/commands/help.c			\
		src/commands/reinstall.c	\
		src/commands/reset.c		

BUILD_DIR = build
OBJ = $(SRC:%.c=$(BUILD_DIR)/%.o)
CC = gcc
CFLAGS = -W -Wall -Wextra -I includes/ -L./lib -lecl -lconfig
EXEC = ehg

#Mandatory rules

all: lib head h_normal $(EXEC)

$(EXEC): $(OBJ)
			@gcc -o $(EXEC) $(OBJ) $(CFLAGS)
			@cp $(EXEC) tests/
			@echo
			@echo "Compilation Finished"

clean:
			@rm -f $(OBJ)
			rm -f *.gcda
			rm -f *.gcno
			@echo

fclean: clean
			rm -f $(EXEC)
			rm -f unit_tests
			@echo

re: fclean lib head h_normal $(EXEC)

#Additional rules

$(BUILD_DIR)/%.o: %.c
					@mkdir -p $(@D)
					@echo -e "\x1b[32m  GCC       $<\x1b[0m"
					@$(CC) $(CFLAGS) -c $< -o $@

head:

                       
                       
			@echo
			@echo
			@echo "╔══════════════════════════╗"
			@echo "║   ______ _    _  _____   ║"
			@echo "║  |  ____| |  | |/ ____|  ║"
			@echo "║  | |__  | |__| | |  __   ║"
			@echo "║  |  __| |  __  | | |_ |  ║"
			@echo "║  | |____| |  | | |__| |  ║"
			@echo "║  |______|_|  |_|\_____|  ║"
			@echo "║                          ║"

h_normal:
			@echo "║       Compiling EHG      ║"
			@echo "╚══════════════════════════╝"
			@echo

h_debug:
			@echo "║       Debuging EHG       ║"
			@echo "╚══════════════════════════╝"
			@echo

debug: CFLAGS += -g
debug: fclean $(OBJ)
			@gcc -o $(EXEC) $(OBJ) $(CFLAGS)
			@echo
			@echo "----------------------------------"
			@echo
			@echo -e "\x1b[31m  WARNING\x1b[0m"
			@echo -e "\x1b[31mDEBUG CALLED\x1b[0m"
			@echo
			@echo -n "PROGRAM ARGUMENTS(Enter for None): "; \
			read PROGRAM_ARGUMENTS; \
			valgrind --track-origins=yes --leak-check=full ./$(EXEC) $${PROGRAM_ARGUMENTS} 2> valgrind_trace

lib:
			make re -C lib/exielcl

pushgit: fclean
			@echo
			@echo "----------------------------------"
			@echo
			@echo -e "\x1b[31m    WARNING\x1b[0m"
			@echo -e "\x1b[31mPUSHGIT  CALLED\x1b[0m"
			@echo
			@echo -n "Are you sure? [y/N] " && read ans && [ $${ans:-N} = y ]
			@git add -A
			@echo -n "NAME OF THE COMMIT: "; \
			read COMMIT_NAME; \
			git commit -m "$${COMMIT_NAME}"
			git push

.PHONY: lib clean fclean