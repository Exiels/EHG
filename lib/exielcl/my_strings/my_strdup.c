/*
** EPITECH PROJECT, 2020
** my_strdup
** File description:
** Duplicate the string passed as a parameter
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    int i = 0;
    char *copy = malloc(sizeof(char) * my_strlen(src));

    for (; src[i] != '\0'; i++)
        copy[i] = src[i];
    copy[i] = '\0';
    return (copy);
}