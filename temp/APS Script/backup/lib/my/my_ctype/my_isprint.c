/*
** EPITECH PROJECT, 2020
** my_isprint
** File description:
** Check if a character is printable
*/

int my_isprint(int character)
{
    if (character > 32 && character < 127)
        return (1);
    else
        return (0);
}