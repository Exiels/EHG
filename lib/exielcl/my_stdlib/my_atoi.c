/*
** EPITECH PROJECT, 2020
** my_atoi
** File description:
** Convert a string in a int
*/

int my_atoi(char const *str)
{
    int result = 0, minus = 0, i = 0;

    if (str[0] == '-') {
        minus++;
        i++;
    }
    for (; str[i] != '\0'; i++) {
        result = result * 10 + (str[i] - '0');
    }
    if (minus == 1)
        result *= (-1);
    return (result);
}