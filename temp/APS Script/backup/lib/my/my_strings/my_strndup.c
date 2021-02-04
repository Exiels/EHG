/*
** EPITECH PROJECT, 2020
** my_strndup
** File description:
** Duplicate nb character of a string passed as a parameter
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strndup(char const *src, int size)
{
    int i = 0;
    char *copy = malloc(sizeof(char) * size);

    for (; i < size; i++)
        copy[i] = src[i];
    copy[i] = '\0';
    return (copy);
}