/*
** EPITECH PROJECT, 2020
** my_isupper
** File description:
** Check if a character is a uppercase character
*/

int my_isupper(int character)
{
    if (character > 64 && character < 91)
        return (1);
    else
        return (0);
}