/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** Add a string a the end of another string
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0, j = 0;

    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}