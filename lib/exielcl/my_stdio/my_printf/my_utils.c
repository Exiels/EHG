/*
** EPITECH PROJECT, 2020
** my_utils
** File description:
** my_utils
*/

int my_intlen(int nb)
{
    int i = 0;

    for (; nb != 0; i++)
        nb /= 10;
    return i;
}

int my_stoui(char *str)
{
    unsigned int result = 0;

    for (int i = 0; str[i] != '\0'; i++)
        result = result * 10 + str[i];
    return (result);
}