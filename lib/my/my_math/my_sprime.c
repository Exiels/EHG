/*
** EPITECH PROJECT, 2020
** my_sprime
** File description:
** Return the sup prime of a number
*/

int my_sprime(int nb)
{
    int b = 0;

    for (int i = 1; i <= nb; i++){
        if (nb % i == 0)
            b++;
    }
    if (b == 2)
        return (nb);
    else
        my_sprime(nb++);
}