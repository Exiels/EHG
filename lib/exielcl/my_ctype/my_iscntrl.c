/*
** EPITECH PROJECT, 2020
** my_iscntrl
** File description:
** Check if a character is a control character
*/

int my_iscntrl(int character)
{
    if ((character >= 0 && character < 31) || character == 127)
        return (1);
    else
        return (0);
}