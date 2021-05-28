/*
** EPITECH PROJECT, 2020
** my_atoll
** File description:
** Convert a string to a long long
*/

long long my_atoll(char const *str)
{
    long long result = 0;
    int minus = 0, i = 0;

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