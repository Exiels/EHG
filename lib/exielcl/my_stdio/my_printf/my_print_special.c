/*
** EPITECH PROJECT, 2020
** my_print_special
** File description:
** my_print_special
*/

#include <stdint.h>
#include <stdio.h>
#include <unistd.h>

void my_print_int(int i);

void my_print_char(char c);

int my_strlen(char const *str);

void my_print_float(double d)
{
    int left_part = (int) d, i = 0;

    my_print_int(left_part);

    d -= left_part;
    my_print_char('.');
    while (i != 6) {
        d *= 10;
        i++;
    }
    my_print_int((int)d);
}

void my_print_pointer(char *str)
{
    intptr_t x = (intptr_t)str;
    char buf[2 + sizeof(x) * 2];
    size_t i;

    buf[0] = '0';
    buf[1] = 'x';
    for (i = 0; i < sizeof(x) * 2; i++) {
        buf[i + 2] = "0123456789abcdef"
        [(x >> ((sizeof(x) * 2 - 1 - i) * 4)) & 0xf];
    }
    for (int j = 2, k = 6; k < my_strlen(buf); j++, k++) {
        buf[j] =  buf[k];
    }
    write(1, buf, (sizeof(buf) - 4));
}

void my_print_error(char *str)
{
    write(2, str, my_strlen(str));
}