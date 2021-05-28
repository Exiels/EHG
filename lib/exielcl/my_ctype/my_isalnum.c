/*
** EPITECH PROJECT, 2020
** my_isalnum
** File description:
** Check if a character is alpha-numerical
*/

int my_isalnum(int character)
{
    if ((character > 47 && character < 58) ||
        (character > 64 && character < 91) ||
        (character > 96 && character < 123))
        return (1);
    else
        return (0);
}