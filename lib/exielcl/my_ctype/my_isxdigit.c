/*
** EPITECH PROJECT, 2020
** my_isxdigit
** File description:
** Check if a character is a hexadecimal number
*/

int my_isxdigit(int character)
{
    if ((character > 47 && character < 58) ||
        (character > 64 && character < 71))
        return (1);
    else
        return (0);
}