/*
** EPITECH PROJECT, 2021
** my_sqrt
** File description:
** Return the square root of a number
*/

int my_sqrt(int nb)
{
    double result = 1, i = 1;

    if (nb <= 0)
        return (0);
    for (; result <= nb; i++)
        result = i * i;
    return (i - 1);
}