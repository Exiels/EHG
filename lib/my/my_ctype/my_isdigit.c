/*
** EPITECH PROJECT, 2020
** my_isdigit
** File description:
** Check if a character is a number
*/

int my_isdigit(int character)
{
    if (character > 47 && character < 58)
        return (1);
    else
        return (0);
}