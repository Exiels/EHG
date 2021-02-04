/*
** EPITECH PROJECT, 2020
** my_strncat
** File description:
** Add nb character of a string at the end of another string
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0, j = 0;

    while (dest[i] != '\0')
        i++;
    while (j != nb) {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}