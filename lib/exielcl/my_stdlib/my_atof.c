/*
** EPITECH PROJECT, 2020
** my_atof
** File description:
** Convert a string in a double
*/

double my_atof(const char *str)
{
    double result = 0.0;
    int point = 0, j = 0, i = 0, minus = 0;

    if (str[0] == '-') {
        minus++;
        i++;
    }
    for (; str[i] != '\0'; i++) {
        if (str[i] == '.') {
            point = 1;
            i++;
        }
        if (point == 1)
            j++;
        result = result * 10 + (str[i] - '0');
    }
    for (; j > 0; j--)
        result *= 0.1;
    (str[0] == '-') ? result *= (-1):result;
    return (result);
}