/*
** EPITECH PROJECT, 2020
** my_isprime
** File description:
** Check if a number is prime
*/

int my_isprime(int nb)
{
    int b = 0;

    for (int i = 1; i <= nb; i++){
        if (nb % i == 0)
            b++;
    }
    if (b == 2)
        return (1);
    else
        return (0);
}