/*
** EPITECH PROJECT, 2020
** my_isblank
** File description:
** Check if a character is blank or not
*/

int my_isblank(int character)
{
    if (character == '\t' || character == ' ')
        return (1);
    else
        return (0);
}