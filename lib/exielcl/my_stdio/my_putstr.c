/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** Print on the terminal a sentence
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}