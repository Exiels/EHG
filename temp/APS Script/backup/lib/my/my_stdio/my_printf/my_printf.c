/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** my_printf
*/

#include <stdarg.h>

void my_print_uoctal(unsigned int i);

void my_print_uhexa(int i, int check);

void my_print_uint(unsigned int i);

void my_print_ubinary(unsigned int i);

void my_print_float(double d);

void my_print_pointer(char *str);

void my_print_short(double d);

void my_print_scientific(double d, int check);

void my_print_nonp(char *str);

void my_print_char(char c);

void my_print_int(int i);

void my_print_string(char *str);

void my_print_percent(void);

void my_print_error(char *str);

void get_inject3(char c, va_list param)
{
    switch (c) {
        case 'S': my_print_nonp(va_arg(param, char *));
            break;
        case 'i': my_print_int(va_arg(param, int));
            break;
        case 'w': my_print_error(va_arg(param, char *));
            break;
        default : break;
    }
}

void get_inject2(char c, va_list param)
{
    switch (c) {
        case 'p': my_print_pointer(va_arg(param, char *));
            break;
        case 'f': my_print_float(va_arg(param, double));
            break;
        case 'F': my_print_float(va_arg(param, double));
            break;
        case 'g': my_print_short(va_arg(param, double));
            break;
        case 'G': my_print_short(va_arg(param, double));
            break;
        case 'e': my_print_scientific(va_arg(param, double), 0);
            break;
        case 'E': my_print_scientific(va_arg(param, double), 1);
            break;
        case 'b': my_print_ubinary(va_arg(param, unsigned int));
            break;
        default : get_inject3(c, param);
            break;
    }
}

void get_inject(char c, va_list param)
{
    switch (c) {
        case 'c': my_print_char(va_arg(param, int));
            break;
        case 'd': my_print_int(va_arg(param, int));
            break;
        case 's': my_print_string(va_arg(param, char *));
            break;
        case '%': my_print_percent();
            break;
        case 'u': my_print_uint(va_arg(param, int));
            break;
        case 'o': my_print_uoctal(va_arg(param, unsigned int));
            break;
        case 'x': my_print_uhexa(va_arg(param, int), 0);
            break;
        case 'X': my_print_uhexa(va_arg(param, int), 1);
            break;
        default: get_inject2(c, param);
            break;
    }
}

void my_printf(char *str, ...)
{
    va_list param;
    va_start(param, str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '%') {
            i++;
            get_inject(str[i], param);
        }
        else{
            my_print_char(str[i]);
        }
    }
    va_end(param);
}