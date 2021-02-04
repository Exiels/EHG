/*
** EPITECH PROJECT, 2020
** my_revstr.c
** File description:
** Reverse a string
*/

char *my_revstr(char *str)
{
    int i = 0, j = 0, count = 0;
    char temp[1000];

    while (str[count] != '\0') {
        temp[count] = str[count];
        count++;
    }
    j = count -1;
    while (i != count) {
        str[i] = temp[j];
        j--;
        i++;
    }
    return (str);
}