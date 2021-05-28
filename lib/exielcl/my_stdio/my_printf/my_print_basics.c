/*
** EPITECH PROJECT, 2020
** my_print_basics
** File description:
** my_print_basics
*/

#include <limits.h>
#include <unistd.h>

void my_print_char(char c)
{
    write(1, &c, 1);
}

void my_print_int(int i)
{
    int val = 0, rem = i;

    if (i <= 9 && i >= 0)
        my_print_char(i + '0');
    if (i < 0) {
        i == INT_MIN ? i++ : i;
        my_print_char('-');
        i = i * (- 1);
        if (i <= 9 && i >= 0)
            my_print_int(i);
    }
    if (i > 9) {
        val = i % 10;
        my_print_int(i / 10);
        (rem == INT_MIN && val == 7) ? val++ : val;
        my_print_char(val + '0');
    }
}

void my_print_string(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_print_char(str[i]);
}

void my_print_percent(void)
{
    write(1, "%%", 1);
}