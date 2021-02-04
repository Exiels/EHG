##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Exiel Lib Makefile
##

SRC	=	my_ctype/my_isalnum.c					\
		my_ctype/my_isalpha.c					\
		my_ctype/my_isblank.c					\
		my_ctype/my_iscntrl.c					\
		my_ctype/my_isdigit.c					\
		my_ctype/my_isgraph.c					\
		my_ctype/my_islower.c					\
		my_ctype/my_isprint.c					\
		my_ctype/my_ispunct.c					\
		my_ctype/my_isspace.c					\
		my_ctype/my_isupper.c					\
		my_ctype/my_isxdigit.c					\
		my_ctype/my_tolower.c					\
		my_ctype/my_toupper.c					\
												\
		my_math/my_isneg.c						\
		my_math/my_isprime.c					\
		my_math/my_sprime.c						\
		my_math/my_sqrt.c						\
												\
		my_stdio/my_printf/my_print_basics.c	\
		my_stdio/my_printf/my_print_extra.c		\
		my_stdio/my_printf/my_print_special.c	\
		my_stdio/my_printf/my_print_unsigned.c	\
		my_stdio/my_printf/my_printf.c			\
		my_stdio/my_printf/my_utils.c			\
		my_stdio/my_putchar.c					\
		my_stdio/my_putnbr.c					\
		my_stdio/my_putstr.c					\
		my_stdio/my_revstr.c					\
												\
		my_stdlib/my_atof.c						\
		my_stdlib/my_atoi.c						\
		my_stdlib/my_atol.c						\
		my_stdlib/my_atoll.c					\
												\
		my_strings/my_strcat.c					\
		my_strings/my_strchr.c					\
		my_strings/my_strcmp.c					\
		my_strings/my_strcpy.c					\
		my_strings/my_strcspn.c					\
		my_strings/my_strdup.c					\
		my_strings/my_strlen.c					\
		my_strings/my_strncat.c					\
		my_strings/my_strncmp.c					\
		my_strings/my_strncpy.c					\
		my_strings/my_strndup.c					\
												\
		my_utils/csfml/my_timer.c				\
		my_utils/my_colorprint.c				\
		my_utils/my_readfile.c					\
		my_utils/my_sreadfile.c

BUILD_DIR = build
OBJ = $(SRC:%.c=$(BUILD_DIR)/%.o)

NAME	=	libmy.a

all: $(NAME)

$(BUILD_DIR)/%.o: %.c
					@mkdir -p $(@D)
					@echo "  CC       $<"
					@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
		cp $(NAME) ../
		cp includes/mylib.h ../../includes/

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)
		rm -f ../$(NAME)
		rm -f ../../includes/mylib.h

re:	fclean all
