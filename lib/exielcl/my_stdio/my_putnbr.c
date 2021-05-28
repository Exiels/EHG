/*
** EPITECH PROJECT, 2020
** my_putnbr.c
** File description:
** Print on the terminal a number
*/

void my_putchar(char c);

void my_putnbr(int nb)
{
    int val = 0;

    if (nb <= 9 && nb >= 0)
        my_putchar(nb + '0');
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (- 1);
        if (nb <= 9 && nb >= 0)
            my_putnbr(nb);
    }
    if (nb > 9) {
        val = nb % 10;
        my_putnbr(nb / 10);
        my_putchar(val + '0');
    }
}