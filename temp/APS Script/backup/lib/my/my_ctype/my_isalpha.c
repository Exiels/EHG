/*
** EPITECH PROJECT, 2020
** my_isalpha
** File description:
** Check if a character is alphabetical
*/

int my_isalpha(int character)
{
    if ((character > 64 && character < 91) ||
        (character > 96 && character < 123))
        return (1);
    else
        return (0);
}