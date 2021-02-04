/*
** EPITECH PROJECT, 2020
** my_isspace
** File description:
** Check if a character is a space character
*/

int my_isspace(int character)
{
    if ((character > 8 && character < 14) || character == ' ')
        return (1);
    else
        return (0);
}