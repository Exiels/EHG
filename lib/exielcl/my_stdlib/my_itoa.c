/*
** EPITECH PROJECT, 2021
** my_iota
** File description:
** my_itoa
*/

#include <stdlib.h>

char *my_itoa(int nb)
{
    char *str = malloc (sizeof(char) * 1024);
    int ptr = -1;

    if (nb == 0) {
        str[0] = '0';
        str[1] = '\0';
        return (str);
    }
    for (int i = nb; i != 0; ptr++)
        i /= 10;
    str[ptr + 1] = '\0';
    for (int i = nb; i != 0; ptr--) {
        str[ptr] = (i % 10)  + '0';
        i /= 10;
    }
    return (str);
}