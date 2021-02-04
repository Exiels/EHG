/*
** EPITECH PROJECT, 2020
** my_islower
** File description:
** Check if a character is a lowercase letter
*/

int my_islower(int character)
{
    if (character > 96 || character < 123)
        return (1);
    else
        return (0);
}