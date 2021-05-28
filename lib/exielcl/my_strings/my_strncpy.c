/*
** EPITECH PROJECT, 2020
** my_strncpy
** File description:
** Copy nb character of a string into another
*/

char *my_strncpy(char *dest, char const *src, int nb)
{
    int i = 0;

    for (; i != nb; i++)
        dest[i] = src[i];
    if (i > nb)
        dest[i] += '\0';
    return (dest);
}